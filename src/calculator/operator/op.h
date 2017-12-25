#ifndef OP_H
#define OP_H
#include <iostream>
#include <string>
#include "../operand/RawElement.h"

class Op : public Data {
public:
	Op();
	~Op();
	virtual RawElement calculate(RawElement e1, RawElement e2);
	virtual int getPriority();
	void setPriority(int n);
	virtual void getValue();
	virtual std::string getType();
private:
	int priority;
}
#endif
