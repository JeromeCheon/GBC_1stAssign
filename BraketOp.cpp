#include "BraketOp.h"
#include <string>
double BraketOp::getValue() {
	return 0.0;
}
BraketOp::BraketOp() {}
BraketOp::~BraketOp() {}
BraketOp::BraketOp(string str) {
	if (str == "(") {
		priority = 20;
		unitType = "openB";
	}
	else if (str == ")") {
		priority = 19;
		unitType = "closeB";
	}
	else {
		try {
			throw "Wrong input error! Braket only deals with () ";
		}
		catch (char* msg) {
			cout << msg << endl;
		}
	}
}
RawElement BraketOp::calculate(RawElement e1, RawElement e2) {
	try
	{
		throw "Wrong input error! Cannot caclulate with brakets.";
	}
	catch (char* msg)
	{
		cout << msg << endl;
		RawElement tmp;
		return tmp;
	}
}
int BraketOp::getPriority() {
	return priority;
}

string BraketOp::getType() {
	return unitType;
}