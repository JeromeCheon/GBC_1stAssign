#include <iostream>
#include <string>
#include <vector>
#include "Minus.h"

using namespace std;

Minus::Minus(){
	// This is Minus class constructor.
	this.unitType = "Minus";
	cout << "Test : Minus() constructor" <<endl;
}
RawElement Minus::calculate(RawElement e1, RawElement e2){	
	if(strcmp(e1.getType(),"float")==0 || strcmp(e2.getType(),"float")==0)
		return new FloatElement(e1.getValue() - e2.getValue());
	else
		return new IntElement(e1.getValue() - e2.getValue());
}
int Minus::getPriority(){
	return 1;
}
string Minus::getType(){
	return unitType;
}
