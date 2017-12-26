#pragma once
#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "./operand/RawElement.h"
#include <string>
#include <iostream>
#include <stack>
#include <vector>
#include "Data.h"
#include <string>
#include <list>

class Calculator {
public:
	std::list <Data> postFix;
	Calculator();
	Calculator(std::string str);
	double getValue();
	void setString(std::string str);
};

#endif
