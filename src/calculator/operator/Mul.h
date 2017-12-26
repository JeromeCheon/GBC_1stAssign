#pragma once
#ifndef MUL_H
#define MUL_H
#include "../operand/RawElement.h"
#include "../operand/FloatElement.h"
#include "../operand/IntElement.h"
#include "BinaryOp.h"
#include <string>
class Mul :public BinaryOp {
public:
	Mul(); // constructor
	RawElement calculate(RawElement e1, RawElement e2); // override!
	int getPriority(); // override!
	std::string getType();
	virtual double getValue();
};
#endif
