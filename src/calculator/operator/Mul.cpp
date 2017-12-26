#include <iostream>
#include <string>
#include <vector>
#include "Mul.h"

Mul::Mul() {
	// This is Plus class constructor.
	unitType = "Mul";
	priority = 13;

}
RawElement Mul::calculate(RawElement e1, RawElement e2) {
	if (e1.getType() == "float" || e2.getType() == "float")
		return FloatElement(e1.getValue() * e2.getValue());
	else
		return IntElement((int)e1.getValue() * (int)e2.getValue());
}
int Mul::getPriority() {
	return priority;
}
std::string Mul::getType() {
	return unitType;
}
double Mul::getValue() {
	return value;
}
