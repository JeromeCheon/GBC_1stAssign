#include "IntElement.h"


IntElement::IntElement() {}

IntElement::IntElement(int n) {
	value = n;
	type = "integer";
}

IntElement::IntElement(std::string n) {
	type = "integer";
	value = stoi(n);
}

double IntElement::getValue() {
	return value;
}

std::string IntElement::getType() {
	return type;
}

