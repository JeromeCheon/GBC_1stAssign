#ifndef FLOATELEMENT_H
#define FLOATELEMENT_H
#include <iostream>

class FloatElement : public RawElement{
protected:
	int value;
public:
	FloatElement(int n);
	FloatElement(string n);
	double getValue();

};
#endif
