#ifndef MINUS_H
#define MINUS_H
#include "../operand/RawElement.h"

class Minus:public BinaryOp{
private:
	int priority=0; // Original declaration is final.
public:
	Minus(); // constructor
	RawElement calculate(RawElement e1, RawElement e2); // override!
	int getPriority(); // override!
};
#endif
