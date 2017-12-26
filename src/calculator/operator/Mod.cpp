#include <iostream>
#include <string>
#include <vector>
#include "Mod.h"

using namespace std;

Mod::Mod() {
	// This is Plus class constructor.
	unitType = "Mod";
	priority = 13;
	//cout << "Test : Mod() constructor" << endl;
}
RawElement Mod::calculate(RawElement e1, RawElement e2) {
	if (e1.getType() == "float" || e2.getType() == "float")
		return FloatElement((int)e1.getValue() % (int)e2.getValue());
	else
		return IntElement(static_cast<int>(e1.getValue()) % static_cast<int>(e2.getValue()));
}
int Mod::getPriority() {
	return priority;
}
std::string Mod::getType() {
	return unitType;
}
double Mod::getValue() {
	return value;
}
