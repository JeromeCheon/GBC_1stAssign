#include <iostream>
#include <string>
#include <vector>
#include "Div.h"

using namespace std;

Div::Div() {
	// This is Div class constructor.
	this.unitType = "Div";
	cout << "Test : Div() constructor" << endl;
}
RawElement Div::calculate(RawElement e1, RawElement e2) {
	if (strcmp(e1.getType(), "float") == 0 || strcmp(e2.getType(), "float") == 0)
		return new FloatElement(e1.getValue() / e2.getValue());
	else
		return new IntElement(e1.getValue() / e2.getValue());
}
int Div::getPriority() {
	return 0;
}
string Div::getType() {
	return unitType;
}
