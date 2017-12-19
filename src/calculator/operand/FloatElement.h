#ifndef FLOATELEMENT_H
#define FLOATELEMENT_H
#include <iostream>
using namespace std;

class FloatElement{
private:
	int value;
public:
	FloatElement(int n);
	FloatElement(string n);
	double getValue();

};
#endif
