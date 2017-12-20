#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector <string> v;
vector <string> parsing;
class Parser {
public:
	Parser();
	~Parser();
	Parser(string str); // in this construc, we split one by one.
};


#endif
