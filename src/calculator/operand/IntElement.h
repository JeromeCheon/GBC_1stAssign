#ifndef INTELEMENT_H
#define INTELEMENT_H
#include <iostream>

class IntElement : public RawElement{
protected:
	int value;
	string type;
public:
	IntElement(int n);
	IntElement(string n);
	double getValue();
	string getType();
};
#endif
