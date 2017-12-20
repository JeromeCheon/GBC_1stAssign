#include <iostream>

using namespace std;

op::op(){
	cout << "Test : op() constructor" <<endl;
}
op::~op(){}
RawElement op::calculate(RawElement e1, RawElement e2){}
int op::getPriority(){}
void op::getValue(){}
string op::getType(){}
