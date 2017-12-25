#ifndef POSTFIX_H
#define POSTFIX_H

#include <string>
#include <stack>
#include <vector>
#include <list>
#include "Parser.h"
#include "../operator/Op.h"
#include "../Data.h"

std::stack <Op> st;
std::list <Data> pf;


class Postfix {
public:
	Postfix();
	void getPostfix();
};

#endif
