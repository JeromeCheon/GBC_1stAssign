#include <iostream>
#include <string>
#include <vector>
#include "Div.h"

using namespace std;

Div::Div() {
	// This is Div class constructor.
	priority = 13;
	unitType = "Div";
	//cout << "Test : Div() constructor" << endl;
}
RawElement Div::calculate(RawElement e1, RawElement e2) {
	if (e1.getType() == "float" || e2.getType() == "float")
		return FloatElement(e1.getValue() / e2.getValue());
	else
		return IntElement((int)e1.getValue() / (int)e2.getValue());
}
int Div::getPriority() {
	return priority;
}
std::string Div::getType() {
	return unitType;
}

double Div::getValue()
{
	return value;	//exception
}
