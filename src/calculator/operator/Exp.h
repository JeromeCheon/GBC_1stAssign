#pragma once
#ifndef EXP_H
#define EXP_H
#include "../operand/RawElement.h"
#include "../operand/FloatElement.h"
#include "../operand/IntElement.h"
#include "BinaryOp.h"
#include <string>

class Exp :public BinaryOp {
public:
	Exp(); // constructor
	RawElement calculate(RawElement e1, RawElement e2); // override!
	int getPriority(); // override!
	std::string getType();
	virtual double getValue();
};
#endif
