#include <iostream>
#include <string>
#include <vector>
#include "BinaryOp.h"

BinaryOp::BinaryOp() {}

RawElement BinaryOp::calculate(RawElement e1, RawElement e2) {
	RawElement tmp;
	return tmp;
}
int BinaryOp::getPriority() {
	return priority;
}
std::string BinaryOp::getType() {
	return unitType;
}
double BinaryOp::getValue() {
	return value;
}
