#pragma once
#ifndef PARSER_H
#define PARSER_H

#include <vector>
#include <string>
#include "Data.h"



class Parser {
public:
	std::vector <Data> fin; // 이 fin은 나중에 Postfix에서 쓰일 것임
	Parser();
	Parser(std::string str);
	void goPostfix();
	void getInfix(std::string str);
	std::vector <Data> getFin();
private:
	std::vector <std::string> v; //parsing하는데에 필요한 vector. 초기값 저장
	std::vector <std::string> k; //parsing하는데에 필요한 vector. parsing 후 값 저장
};

#endif