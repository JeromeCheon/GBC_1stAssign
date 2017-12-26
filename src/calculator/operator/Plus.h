#pragma once
#ifndef PLUS_H
#define PLUS_H
#include "../operand/RawElement.h"
#include "../operand/FloatElement.h"
#include "../operand/IntElement.h"
#include "BinaryOp.h"
class Plus : public BinaryOp {
public:
	Plus(); // constructor
	RawElement calculate(RawElement e1, RawElement e2); // override!
	int getPriority(); // override!
	std::string getType();
	virtual double getValue();
};
#endif
