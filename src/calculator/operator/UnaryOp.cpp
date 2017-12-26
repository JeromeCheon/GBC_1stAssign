#include <iostream>
#include <string>
#include <vector>
#include "UnaryOp.h"

UnaryOp::UnaryOp() {}

RawElement UnaryOp::calculate(RawElement e) {
	RawElement tmp;
	return tmp;
}
int UnaryOp::getPriority() {
	return priority;
}
std::string UnaryOp::getType() {
	return unitType;
}
double UnaryOp::getValue() {
	return value;
}
