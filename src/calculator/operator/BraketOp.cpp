#include "BraketOp.h"
#include <string>


BraketOp::BraketOp() {
	unitType = "Braket";
}
BraketOp::~BraketOp() {}
BraketOp::BraketOp(string str) {
	if (strcmp(str, "(")) {
		priority = 20
	}
	else if (strcmp(str, ")")) {
		priority = 19;
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
RawElement calculate(RawElement e1, RawElement e2) {
	try
	{
		throw "Wrong input error! Cannot caclulate with brakets.";
	}
	catch (char* msg)
	{
		cout << msg << endl;
		return;
	}
}
int BraketOp::getPriority() {
	return priority;
}

string BraketOp::getType() {
	return unitType;
}
