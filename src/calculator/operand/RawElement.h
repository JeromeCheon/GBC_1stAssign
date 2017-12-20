#ifndef RAWELEMENT_H
#define RAWELEMENT_H
#include <iostream>

class RawElement: public Data{
public:
	RawElement();
	~RawElement();
	virtual double getValue();
	static RawElement make(string str);
	string getType();
};
#endif
