#include <iostream>
using namespace std;

Op::Op() {}
Op::~Op() {}
RawElement Op::calculate(RawElement e1, RawElement e2) {}
int Op::getPriority() {
	return priority;
}
void Op::getValue() {}
string Op::getType() {}
void Op::setPriority(int n) {
	priority = n;
}
