#include "Parser.h"
#include "Data.h"
#include <iostream>
#include <vector>
#include <string>
#include "RawElement.h"
using namespace std;
std::vector <string> v;
std::vector <string> k;
std::vector <Data> fin;

Parser::Parser() {}

Parser::Parser(string str) {
	for (int i = 0; i<str.size(); i++) {
		string arg = str.substr(i, 1);
		v.push_back(arg);
	}
}

void Parser::getInfix(string str) {
	int tmp = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].compare("(") == 0 || v[i].compare(")") == 0 || v[i].compare("+") == 0 || v[i].compare("-") == 0 || v[i].compare("*") == 0 || v[i].compare("/") == 0 || v[i].compare("%") == 0) {
			int len = i - tmp;
			if (len > 0) {
				string args = str.substr(tmp, len);
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
	for (int p = 0; p < k.size(); p++) {
		if (k[p].compare("+") == 0) {
			Op newPlus = new Plus();
			fin.push_back(newPlus);
		}
		else if (k[p].compare("-") == 0) {
			Op newMinus = new Minus();
			fin.push_back(newMinus);
		}
		else if (k[p].compare("*") == 0) {
			Op newMul = new Mul();
			fin.push_back(newMul);
		}
		else if (k[p].compare("/") == 0) {
			Op newDiv = new Div();
			fin.push_back(newDiv);
		}
		else if (k[p].compare("%") == 0) {
			Op newMod = new Mod();
			fin.push_back(newMod);
		}
		else {
			RawElement newData = RawElement::make(k[p].c_str());
			fin.push_back(newData);
		}
	}
}
Parser::~Parser()
{
}
