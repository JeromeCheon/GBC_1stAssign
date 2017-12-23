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
	return 0;
}
std::string BinaryOp::getType() {
	return "BinaryOp";
}
double BinaryOp::getValue() {
	return 0.0;
}