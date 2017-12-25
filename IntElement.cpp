#include "IntElement.h"
IntElement::IntElement() {}

IntElement::IntElement(int n) {
	value = n;
	unitType = "integer";
}

IntElement::IntElement(std::string n) { // �̷��� ó���ص� getValue�� ����ؾ� value�� ���� �� �ִ� �� �ƴѰ�?
	unitType = "integer";
	value = stoi(n);
}

double IntElement::getValue() {
	return value;
}

std::string IntElement::getType() {
	return unitType;
}