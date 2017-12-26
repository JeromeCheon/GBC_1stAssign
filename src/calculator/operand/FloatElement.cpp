#include "FloatElement.h"
#include <stdlib.h>
FloatElement::FloatElement() {}

FloatElement::FloatElement(double n) {
	value = n;
	unitType = "float";
}

FloatElement::FloatElement(std::string n) {
	value = atof(n.c_str());
	unitType = "float";
}

double FloatElement::getValue() {
	return value;
}

std::string FloatElement::getType() {
	return unitType;
}
