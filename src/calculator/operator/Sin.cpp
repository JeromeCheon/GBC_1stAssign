#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include "Sin.h"


Sin::Sin() {
	// This is Plus class constructor.
	unitType = "Sin";
	priority = 14;

}
RawElement Sin::calculate(RawElement e) {
	return FloatElement(sin((double)e.getValue()));
}
int Sin::getPriority() {
	return priority;
}
std::string Sin::getType() {
	return unitType;
}
double Sin::getValue() {
	return value;
}
