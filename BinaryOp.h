#pragma once
#ifndef BINARYOP_H
#define BINARYOP_H
#include "RawElement.h"
#include "Op.h"
#include <string>

class BinaryOp :public Op {
public:
	BinaryOp(); // constructor
	virtual RawElement calculate(RawElement e1, RawElement e2); // override!
	virtual int getPriority(); // override!
	virtual std::string getType();
	virtual double getValue();
};
#endif

