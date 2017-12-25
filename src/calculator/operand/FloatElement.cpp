#include "FloatElement.h"

FloatElement::FloatElement() {}

FloatElement::FloatElement(int n) {
	value = n;
	type = "float";
}

FloatElement::FloatElement(std::string n) {
	value = stof(n);
	type = "float";
}

double FloatElement::getValue() {
	return value;
}

std::string FloatElement::getType() {
	return type;
}
