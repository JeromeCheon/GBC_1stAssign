#pragma once
#ifndef BRAKETOP_H
#define BRAKETOP_H
using namespace std;
#include <string>
#include "RawElement.h"
#include "Op.h"
class BraketOp : public Op {
public:
	BraketOp();
	BraketOp(std::string str); // new BraketOp했을 때 스트링을 받으면 거기에 따라 braket 우선순위 두는것.
	RawElement calculate(RawElement e1, RawElement e2);
	int getPriority();
	std::string getType();
	~BraketOp();
	virtual double getValue();
};
#endif // BRAKETOP_H