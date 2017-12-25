#ifndef RAWELEMENT_H
#define RAWELEMENT_H

#include <string>

#include "../Data.h"

class RawElement : public Data {
public:
	RawElement();
	virtual double getValue();
	RawElement make(std::string str);
	std::string getType();
};

#endif
