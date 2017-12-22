#pragma once
#ifndef POSTFIX_H
#define POSTFIX_H

#include <string>
#include <stack>
#include <vector>
#include <list>
#include "Parser.h"
#include "Op.h"
#include "Data.h"





class Postfix {
public:
	std::list <Data> pf;
	std::list <Data> getPf();
	Postfix();
	void getPostfix(Parser* a);
private:
	std::stack <Data> st;
};

#endif

