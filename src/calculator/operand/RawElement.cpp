#include "./RawElement.h"
#include "./IntElement.h"
#include "./FloatElement.h"
#include <string>

RawElement::RawElement() {}

double RawElement::getValue() {}

std::string RawElement::getType() {}

RawElement RawElement::make(std::string str) {
	if (str.find('.')<0) {
		IntElement newInt(str);
		return newInt;
	}
	else {
		FloatElement newFloat(str);
		return newFloat;
	}
}
