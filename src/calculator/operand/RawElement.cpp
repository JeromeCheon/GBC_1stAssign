#include "./RawElement.h"
#include "./IntElement.h"
#include "./FloatElement.h"
#include <string>

RawElement::RawElement() {}

double RawElement::getValue() {
	return value;
}

std::string RawElement::getType() {
	return unitType;
}

RawElement RawElement::make(std::string str) {
	if (str.find('.') == -1) {  // float인지 int인지 구별해서 각각에 해당하는 subclass 
		IntElement newInt(str); // 포인터로 접근하는게 더 나을 것인가?
		return newInt;
		/*
		RawElement* newInt = new IntElement(str);
		return newInt;
		delete newInt;
		*/
	}
	else {
		FloatElement newFloat(str);
		return newFloat;
	}
}
