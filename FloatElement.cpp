#include "FloatElement.h"

FloatElement::FloatElement() {}

FloatElement::FloatElement(double n) {
	value = n;
	unitType = "float";
}

FloatElement::FloatElement(std::string n) {
	value = stof(n);
	unitType = "float";
}

double FloatElement::getValue() {
	return value;
}

std::string FloatElement::getType() {
	return unitType;
}
