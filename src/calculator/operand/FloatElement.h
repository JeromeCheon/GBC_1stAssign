#ifndef FLOATELEMENT_H
#define FLOATELEMENT_H
#include <string>
#include "RawElement.h"
#include "../Data.h"

class FloatElement:public RawElement {
public:
	FloatElement();
	FloatElement(int n);
	FloatElement(std::string n);
	double getValue();
	std::string getType();
private:
	double value;
	std::string type;
}
#endif
