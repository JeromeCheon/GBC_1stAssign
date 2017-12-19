#ifndef INTELEMENT_H
#define INTELEMENT_H
#include <iostream>
using namespace std;

class IntElement{
private:
	int value;
	string type;
public:
	IntElement(int n);
	IntElement(string n);
	double getValue();
	string getType();
};
#endif
