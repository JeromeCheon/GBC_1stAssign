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


Parser::Parser(std::string str) { // str ���� ���� vector �迭�� for���� �̿��ؼ� �ϳ��ϳ� �־�. 
	std::cout << "This is Parser() test! " << std::endl;
	for (int i = 0; i < str.size(); i++) {
		std::string arg = str.substr(i, 1);
		v.push_back(arg); // push�Ͽ� arg�� �ִ� ����
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

	for (int p = 0; p < (int)k.size(); p++) { // �� ���̽��� �´� �����ڸ� fin �迭�� push�ϸ鼭 �� �����ڰ� �����ϴ� unitType�� ���Ŀ� �ҷ��� �� �ְ� ��.
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
		else { // operator���� �ƴ� �� RawElement�� make �޼��� ȣ��. �׸��� fin���� �ִ´�.
			RawElement newData;
			RawElement real = newData.make(k[p]);
			fin.push_back(real);
		}
	}
	std::cout << "f[1] typecheck: " << fin[1].getType() << std::endl;

}