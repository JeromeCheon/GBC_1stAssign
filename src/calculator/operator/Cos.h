#pragma once
#ifndef COS_H
#define COS_H
#include "../operand/RawElement.h"
#include "../operand/FloatElement.h"
#include "../operand/IntElement.h"
#include "UnaryOp.h"
#include <string>

class Cos :public UnaryOp {
public:
	Cos(); // constructor
	RawElement calculate(RawElement e); // override!
	int getPriority(); // override!
	std::string getType();
	virtual double getValue();
};
#endif
