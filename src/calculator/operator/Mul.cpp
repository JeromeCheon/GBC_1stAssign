#include <iostream>
#include <string>
#include <vector>
#include "Mul.h"

using namespace std;

Mul::Mul(){
	// This is Plus class constructor.
	this.unitType = "Mul";
	cout << "Test : Mul() constructor" <<endl;
}
RawElement Mul::calculate(RawElement e1, RawElement e2){	
	if(strcmp(e1.getType(),"float")==0 || strcmp(e2.getType(),"float")==0)
		return new FloatElement(e1.getValue() * e2.getValue());
	else
		return new IntElement(e1.getValue() * e2.getValue());
}
int Mul::getPriority(){
	return 0;
}
string Mul::getType(){
	return unitType;
}
