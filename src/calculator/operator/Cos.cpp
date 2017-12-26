#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include "Cos.h"


Cos::Cos() {
	// This is Plus class constructor.
	unitType = "Cos";
	priority = 14;

}
RawElement Cos::calculate(RawElement e) {
	return FloatElement(cos((double)e.getValue()));
}
int Cos::getPriority() {
	return priority;
}
std::string Cos::getType() {
	return unitType;
}
double Cos::getValue() {
	return value;
}