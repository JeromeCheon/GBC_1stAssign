#pragma once
#ifndef FLOATELEMENT_H
#define FLOATELEMENT_H
#include <string>
#include "RawElement.h"
#include "../Data.h"

class FloatElement :public RawElement {
public:
	FloatElement();
	FloatElement(double n);
	FloatElement(std::string n);
	double getValue();
	std::string getType();
};
#endif
