#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>
#include <iostream>
#include <stack>
#include <vector>

std::stack <Data> ans;


class Calculator {
public:
	Calculator();
	Calculator(std::string str);
	virtual double getValue();
	void setString(std::string str);
};

#endif
