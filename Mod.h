#pragma once
#ifndef MOD_H
#define MOD_H
#include "RawElement.h"
#include "FloatElement.h"
#include "IntElement.h"
#include "BinaryOp.h"
#include <string>

class Mod :public BinaryOp {
public:
	Mod(); // constructor
	RawElement calculate(RawElement e1, RawElement e2); // override!
	int getPriority(); // override!
	std::string getType();
	virtual double getValue();
};
#endif
