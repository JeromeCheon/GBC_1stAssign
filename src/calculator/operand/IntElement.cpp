#include "IntElement.h"
#include <stdlib.h>
IntElement::IntElement() {}

IntElement::IntElement(int n) {
	value = n;
	unitType = "integer";
}

IntElement::IntElement(std::string n) { // 이렇게 처리해도 getValue를 사용해야 value를 얻을 수 있는 것 아닌가?
	unitType = "integer";
	value = atoi(n.c_str());
}

double IntElement::getValue() {
	return value;
}

std::string IntElement::getType() {
	return unitType;
}

