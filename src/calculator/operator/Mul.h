#ifndef MUL_H
#define MUL_H
#include "../operand/RawElement.h"

class Mul :public BinaryOp {
private:
	int priority = 0; // Original declaration is final.
public:
	Mul(); // constructor
	RawElement calculate(RawElement e1, RawElement e2); // override!
	int getPriority(); // override!
};
#endif
