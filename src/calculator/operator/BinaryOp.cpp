#include <iostream>
#include <string>
#include <vector>
#include "BinaryOp.h"

using namespace std;

BinaryOp::BinaryOp(){
	cout << "Test : BinaryOp() constructor" <<endl;
}
RawElement BinaryOp::calculate(RawElement e1, RawElement e2){}
int BinaryOp::getPriority(){}
string BinaryOp::getType(){}
