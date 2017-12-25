#include "./Parser.h"
#include "./Postfix.h"
#include "../Data.h"
#include "../operator/Op.h"
#include "../operator/BinaryOp.h"
#include "../operator/BraketOp.h"
#include "../operator/Plus.h"
#include "../operator/Minus.h"
#include "../operator/Mul.h"
#include "../operator/Div.h"
#include "../operator/Mod.h"
#include "../operand/RawElement.h"
#include <iostream>
#include <vector>
#include <string>



Parser::Parser() {}

Parser::Parser(std::string str) {
	for (int i = 0; i<str.size(); i++) {
		std::string arg = str.substr(i, 1);
		v.push_back(arg);
	}
}

void Parser::goPostfix() {
	Postfix test;
	test.getPostfix();
}

void Parser::getInfix(std::string str)
{
	int tmp = 0;
	for (int i = 0; i<v.size(); i++) {
		if (v[i].compare("(") == 0 || v[i].compare(")") == 0 || v[i].compare("+") == 0 || v[i].compare("-") == 0 || v[i].compare("*") == 0 || v[i].compare("/") == 0 || v[i].compare("%") == 0) {
			int len = i - tmp;
			if (len>0) {
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
	for (int p = 0; p<k.size(); p++) {
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
			fin.push_back(BraketOp(")"));
		}
		else if (k[p] == ")") {
			fin.push_back(BraketOp("("));
		}
		else {
			RawElement newData;
			newData.make(k[p].c_str());
			fin.push_back(newData);
		}
}

