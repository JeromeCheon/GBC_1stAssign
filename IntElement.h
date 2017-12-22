#pragma once
#ifndef INTELEMENT_H
#define INTELEMENT_H

#include <string>
#include "RawElement.h"
#include "Data.h"
//#include "FloatElement.h" 왜 있었던 거지?

class IntElement : public RawElement {

public:
	IntElement();
	IntElement(int n);
	IntElement(std::string str);
	double getValue();
	virtual std::string getType();

};

#endif