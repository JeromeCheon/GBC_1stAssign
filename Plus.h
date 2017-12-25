#pragma once
#ifndef PLUS_H
#define PLUS_H
#include <string>
#include "RawElement.h"
#include "FloatElement.h"
#include "IntElement.h"
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