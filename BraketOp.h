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
	BraketOp(std::string str); // new BraketOp���� �� ��Ʈ���� ������ �ű⿡ ���� braket �켱���� �δ°�.
	RawElement calculate(RawElement e1, RawElement e2);
	int getPriority();
	std::string getType();
	~BraketOp();
	virtual double getValue();
};
#endif // BRAKETOP_H