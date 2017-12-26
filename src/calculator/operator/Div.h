#pragma once
#ifndef DIV_H
#define DIV_H
#include "../operand/RawElement.h"
#include "../operand/FloatElement.h"
#include "../operand/IntElement.h"
#include "./BinaryOp.h"
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
