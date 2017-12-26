#define _USE_MATH_DEFINES
#include <math.h>
#include "Parser.h"
#include "Postfix.h"
#include "../Data.h"
#include "../operator/Op.h"
#include "../operator/BinaryOp.h"
#include "../operator/BraketOp.h"
#include "../operator/Plus.h"
#include "../operator/Minus.h"
#include "../operator/Mul.h"
#include "../operator/Div.h"
#include "../operator/Mod.h"
#include "../operator/Exp.h"
#include "../operator/Sin.h"
#include "../operator/Cos.h"
#include "../operand/RawElement.h"
#include "../operand/IntElement.h"
#include <iostream>
#include <vector>
#include <string>


Parser::Parser() {}

std::list <Data> Parser::goPostfix() {
	Postfix test;
	std::list <Data> temp = test.getPostfix(this);
	return temp;
}

Parser::Parser(std::string str) { // str 받은 값을 vector 배열에 for문을 이용해서 하나하나 넣어. 
	for (int i = 0; i < str.size(); i++) {
		std::string arg = str.substr(i, 1);
		v.push_back(arg); // push하여 arg에 넣는 과정
	}
}


std::vector <Data> Parser::getFin() {
	return fin2;
}

void Parser::getInfix(std::string str)
{
	int tmp = 0;
	v.push_back("end");
	for (int i = 0; i < v.size(); i++) {
		if (v[i].compare("P") == 0) {
			k.push_back("PI");
			tmp += 2;
			i += 1;
		}
		else if (v[i].compare("s") == 0) {
			k.push_back("sin");
			tmp += 3;
			i += 2;
		}
		else if (v[i].compare("c") == 0) {
			k.push_back("cos");
			tmp += 3;
			i += 2;
		}
		else if (v[i].compare("(") == 0 || v[i].compare(")") == 0 || v[i].compare("+") == 0 || v[i].compare("-") == 0 || v[i].compare("*") == 0 || v[i].compare("/") == 0 || v[i].compare("%") == 0 || v[i].compare("end")==0 || v[i].compare("^")==0) {
			int len = i - tmp;
			if (len > 0) {
				std::string args = str.substr(tmp, len);
				k.push_back(args);
				if (v[i].compare("end") != 0) {
					k.push_back(v[i].c_str());
				}
				tmp = i + 1;
			}
			else {
				if (v[i].compare("end") != 0) {
					k.push_back(v[i].c_str());
					tmp++;
				}
			}
		}
	}
	for (int p = 0; p < k.size(); p++) { // 각 케이스에 맞는 생성자를 fin 배열에 push하면서 각 생성자가 지정하는 unitType을 추후에 불러올 수 있게 함.
		if (k[p] == "+") {
			fin.push_back(Plus());
		}
		else if (k[p].compare("-") == 0) {
			fin.push_back(Minus());
		}
		else if (k[p].compare("*") == 0) {
			fin.push_back(Mul());
		}
		else if (k[p].compare("/") == 0) {
			fin.push_back(Div());
		}
		else if (k[p].compare("%") == 0) {
			fin.push_back(Mod());
		}
		else if (k[p] == "(") {
			fin.push_back(BraketOp("("));
		}
		else if (k[p] == ")") {
			fin.push_back(BraketOp(")"));
		}
		else if (k[p] == "^") {
			fin.push_back(Exp());
		}
		else if (k[p] == "sin") {
			fin.push_back(Sin());
		}
		else if (k[p] == "cos") {
			fin.push_back(Cos());
		}
		else if (k[p] == "PI") {
			FloatElement pi = M_PI;
			fin.push_back(pi);
		}
		else { // operator들이 아닐 때 RawElement의 make 메서드 호출. 그리고 fin에다 넣는다.
			RawElement newData;
			RawElement real = newData.make(k[p]);
			fin.push_back(real);
		}
	}
	for (int q = 0; q < fin.size(); q++) {
		if (fin[q].getType() == "Minus") {
			if (q == 0) {
				fin2.push_back(IntElement(-1));
				fin2.push_back(Mul());
			}
			else if (fin[q - 1].getType() == "Plus" || fin[q - 1].getType() == "Minus" || fin[q - 1].getType() == "Mul" || fin[q - 1].getType() == "Div" || fin[q - 1].getType() == "Mod" || fin[q - 1].getType() == "openB" || fin[q - 1].getType() == "closeB" || fin[q - 1].getType() == "Op" || fin[q-1].getType()=="Exp"|| fin[q-1].getType()=="Sin" || fin[q-1].getType()=="Cos") {
				fin2.push_back(IntElement(-1));
				fin2.push_back(Mul());
			}
			else {
				fin2.push_back(fin[q]);
			}
		}
		else {
			fin2.push_back(fin[q]);
		}
	}
}
