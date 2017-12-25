#ifndef INTELEMENT_H
#define INTELEMENT_H

#include <string>
#include "RawElement.h"
#include "FloatElement.h"

class IntElement : public RawElement {
	
public:
	IntElement();
	IntElement(int n);
	IntElement(std::string str);
	virtual double getValue();
	virtual std::string getType();

private:
	int value;
	std::string type;
	
};

#endif
