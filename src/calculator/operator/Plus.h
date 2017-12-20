#ifndef PLUS_H
#define PLUS_H
#include "../operand/RawElement.h"

class Plus:public BinaryOp{
private:
	int priority=0; // Original declaration is final.
public:
	Plus(); // constructor
	RawElement calculate(RawElement e1, RawElement e2); // override!
	int getPriority(); // override!
};
#endif
