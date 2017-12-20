#ifndef BINARYOP_H
#define BINARYOP_H
#include "../operand/RawElement.h"

class BinaryOp:public op{
public:
	BinaryOp(); // constructor
	virtual RawElement calculate(RawElement e1, RawElement e2)=0; // override!
	virtual int getPriority()=0; // override!
	virtual string getType()=0;
};
#endif
