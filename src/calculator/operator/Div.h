#ifndef DIV_H
#define DIV_H
#include "../operand/RawElement.h"

class Div :public BinaryOp {
private:
	int priority = 0; // Original declaration is final.
public:
	Div(); // constructor
	RawElement calculate(RawElement e1, RawElement e2); // override!
	int getPriority(); // override!
};
#endif

