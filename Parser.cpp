#include "Parser.h"
#include "Postfix.h"
#include "Data.h"
#include "Op.h"
#include "BinaryOp.h"
#include "BraketOp.h"
#include "Plus.h"
#include "Minus.h"
#include "Mul.h"
#include "Div.h"
#include "Mod.h"
#include "RawElement.h"
#include <iostream>
#include <vector>
#include <string>
Parser::Parser() {}


Parser::Parser(std::string str) { // str 받은 값을 vector 배열에 for문을 이용해서 하나하나 넣어. 
	std::cout << "This is Parser() test! " << std::endl;
	for (int i = 0; i < str.size(); i++) {
		std::string arg = str.substr(i, 1);
		v.push_back(arg); // push하여 arg에 넣는 과정
	}
	std::cout << "v[1]" << v[1] << std::endl;
}

void Parser::goPostfix() {
	Postfix test;
	test.getPostfix(this);
}

std::vector <Data> Parser::getFin() {
	return fin;
}

void Parser::getInfix(std::string str)
{
	std::cout << "getInfix start" << std::endl;

	int tmp = 0;
	for (int i = 0; i < (int)v.size(); i++) {
		if (v[i].compare("(") == 0 || v[i].compare(")") == 0 || v[i].compare("+") == 0 || v[i].compare("-") == 0 || v[i].compare("*") == 0 || v[i].compare("/") == 0 || v[i].compare("%") == 0) {
			int len = i - tmp;
			if (len > 0) {
				std::string args = str.substr(tmp, len);
				k.push_back(args);
				k.push_back(v[i].c_str());
				tmp = i + 1;
			}
			else {
				k.push_back(v[i].c_str());
				tmp++;
			}
		}
	}
	std::cout << "k[1]" << k[1] << std::endl;

	for (int p = 0; p < (int)k.size(); p++) { // 각 케이스에 맞는 생성자를 fin 배열에 push하면서 각 생성자가 지정하는 unitType을 추후에 불러올 수 있게 함.
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
		else { // operator들이 아닐 때 RawElement의 make 메서드 호출. 그리고 fin에다 넣는다.
			RawElement newData;
			RawElement real = newData.make(k[p]);
			fin.push_back(real);
		}
	}
	std::cout << "f[1] typecheck: " << fin[1].getType() << std::endl;

}