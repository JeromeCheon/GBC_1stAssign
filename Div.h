#pragma once
#ifndef DIV_H
#define DIV_H
#include "RawElement.h"
#include "FloatElement.h"
#include "IntElement.h"
#include "BinaryOp.h"
#include <string>
class Div :public BinaryOp {
public:
	Div(); // constructor
	RawElement calculate(RawElement e1, RawElement e2); // override!
	int getPriority(); // override!
	std::string getType();
	virtual double getValue();
};
#endif