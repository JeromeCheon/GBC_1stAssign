#include <iostream>
#include <string>
#include <vector>
#include "BinaryOp.h"

BinaryOp::BinaryOp() {}
RawElement BinaryOp::calculate(RawElement e1, RawElement e2) {}
int BinaryOp::getPriority() {
	return 0;
}
string BinaryOp::getType() {
	return "Binaryop";
}

