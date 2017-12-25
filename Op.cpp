#include <iostream>
#include "Op.h"
using namespace std;

Op::Op() {
	unitType = "Op";
	priority = 0;
	value = 0;
}
Op::~Op() {}
RawElement Op::calculate(RawElement e1, RawElement e2) {
	RawElement tmp;
	return tmp;
}
int Op::getPriority() {
	return priority;
}
double Op::getValue() { return 0.0; }
string Op::getType() {
	return "Op type";
}
void Op::setPriority(int n) {
	priority = n;
}