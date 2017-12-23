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
	if (str.find('.') == -1) {  // float���� int���� �����ؼ� ������ �ش��ϴ� subclass 
		IntElement newInt(str); // �����ͷ� �����ϴ°� �� ���� ���ΰ�?
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