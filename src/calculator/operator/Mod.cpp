#include <iostream>
#include <string>
#include <vector>
#include "Mod.h"

using namespace std;

Mod::Mod() {
	// This is Plus class constructor.
	this.unitType = "Mod";
	cout << "Test : Mod() constructor" << endl;
}
RawElement Mod::calculate(RawElement e1, RawElement e2) {
	if (strcmp(e1.getType(), "float") == 0 || strcmp(e2.getType(), "float") == 0)
		return new FloatElement(e1.getValue() % e2.getValue());
	else
		return new IntElement(e1.getValue() % e2.getValue());
}
int Mod::getPriority() {
	return 0;
}
string Mod::getType() {
	return unitType;
}
