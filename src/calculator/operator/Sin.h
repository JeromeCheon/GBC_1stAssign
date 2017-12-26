#pragma once
#ifndef SIN_H
#define SIN_H
#include "../operand/RawElement.h"
#include "../operand/FloatElement.h"
#include "../operand/IntElement.h"
#include "UnaryOp.h"
#include <string>

class Sin :public UnaryOp {
public:
	Sin(); // constructor
	RawElement calculate(RawElement e); // override!
	int getPriority(); // override!
	std::string getType();
	virtual double getValue();
};
#endif
