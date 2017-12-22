#pragma once
#ifndef MINUS_H
#define MINUS_H
#include "RawElement.h"
#include "FloatElement.h"
#include "IntElement.h"
#include "BinaryOp.h"
#include <string>
class Minus :public BinaryOp {
public:
	Minus(); // constructor
	RawElement calculate(RawElement e1, RawElement e2); // override!
	int getPriority(); // override!
	std::string getType();
	virtual double getValue();
};
#endif

