#pragma once
#ifndef POSTFIX_H
#define POSTFIX_H

#include <string>
#include <stack>
#include <vector>
#include <list>
#include "Parser.h"
#include "../operator/Op.h"
#include "../Data.h"

class Postfix {
public:
	std::list <Data> pf;
	std::list <Data> getPf();
	Postfix();
	std::list <Data> getPostfix(Parser* a);
private:
	std::stack <Data> st;
};

#endif
