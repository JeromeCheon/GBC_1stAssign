#pragma once
#ifndef UNARYOP_H
#define UNARYOP_H
#include "../operand/RawElement.h"
#include "Op.h"
#include <string>

class UnaryOp :public Op {
public:
	UnaryOp(); // constructor
	virtual RawElement calculate(RawElement e); // override!
	virtual int getPriority(); // override!
	virtual std::string getType();
	virtual double getValue();
};
#endif
