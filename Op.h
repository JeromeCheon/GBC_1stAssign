#pragma once
#ifndef OP_H
#define OP_H
#include <iostream>
#include <string>
#include "RawElement.h"

class Op : public Data {
public:
	Op();
	~Op();
	virtual RawElement calculate(RawElement e1, RawElement e2);
	virtual int getPriority();
	void setPriority(int n);
	virtual double getValue();
	virtual std::string getType();
};
#endif
