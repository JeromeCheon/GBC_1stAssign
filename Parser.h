#pragma once
#ifndef PARSER_H
#define PARSER_H

#include <vector>
#include <string>
#include "Data.h"



class Parser {
public:
	std::vector <Data> fin; // �� fin�� ���߿� Postfix���� ���� ����
	Parser();
	Parser(std::string str);
	void goPostfix();
	void getInfix(std::string str);
	std::vector <Data> getFin();
private:
	std::vector <std::string> v; //parsing�ϴµ��� �ʿ��� vector. �ʱⰪ ����
	std::vector <std::string> k; //parsing�ϴµ��� �ʿ��� vector. parsing �� �� ����
};

#endif