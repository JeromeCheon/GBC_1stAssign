#ifndef MOD_H
#define MOD_H
#include "../operand/RawElement.h"

class Mod :public BinaryOp {
private:
	int priority = 0; // Original declaration is final.
public:
	Mod(); // constructor
	RawElement calculate(RawElement e1, RawElement e2); // override!
	int getPriority(); // override!
};
#endif

