#pragma once
#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "RawElement.h"
#include <string>
#include <iostream>
#include <stack>
#include <vector>
#include "Data.h"
#include <string>


class Calculator {
public:
	Calculator();
	Calculator(std::string str);
	double getValue();
	void setString(std::string str);
};

#endif