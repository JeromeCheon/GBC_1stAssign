#ifndef OP_H
#define OP_H
#include <iostream>
#include <RawElement.h>

class op : public Data{
public:
	op();
	virtual ~op();
	virtual RawElement calculate(RawElement e1, RawElement e2);
	virtual int getPriority();
	virtual void getValue();
	virtual string getType();
}
#endif
