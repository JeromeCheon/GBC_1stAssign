#include <iostream>
#include <string>
#include <vector>
#include "Minus.h"

using namespace std;

Minus::Minus() {
	// This is Minus class constructor.
	unitType = "Minus";
	priority = 12;
	//cout << "Test : Minus() constructor" << endl;
}
RawElement Minus::calculate(RawElement e1, RawElement e2) {
	if (e1.getType() == "float" || e2.getType() == "float")
		return FloatElement(e1.getValue() - e2.getValue());
	else
		return IntElement((int)e1.getValue() - (int)e2.getValue());
}
int Minus::getPriority() {
	return priority;
}
std::string Minus::getType() {
	return unitType;
}
double Minus::getValue() {
	return value;
}