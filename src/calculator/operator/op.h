#ifndef OP_H
#define OP_H
#include <iostream>
#include <RawElement.h>

class op{
	RawElement calculate(RawElement e1, RawElement e2);
	int getPriority();
}
#endif
