#include <iostream>
#include <string>
#include <vector>
#include "Plus.h"

using namespace std;

Plus::Plus() {
	this.unitType = "Plus";
}
RawElement Plus::calculate(RawElement e1, RawElement e2) {
	if (strcmp(e1.getType(), "float") == 0 || strcmp(e2.getType(), "float") == 0)
		return new FloatElement(e1.getValue() + e2.getValue());
	else
		return new IntElement(e1.getValue() + e2.getValue());
}
int Plus::getPriority() {
	return 1;
}
string Plus::getType() {
	return unitType;
}
