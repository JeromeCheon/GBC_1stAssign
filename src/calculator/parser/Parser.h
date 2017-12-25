#ifndef PARSER_H
#define PARSER_H

#include <vector>
#include <string>

std::vector <std::string> v;
std::vector <std::string> k;
std::vector <Data> fin;

class Parser {
public:
	Parser();
	Parser(std::string str);
	void goPostfix();
	void getInfix(std::string str);
};

#endif
