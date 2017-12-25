#ifndef BRAKETOP_H
#define BRAKETOP_H

#include <string>
#include "../operand/RawElement.h""
#include "./Op.h"
class BraketOp : public Op {
public:
	BraketOp();
	BraketOp(std::string str); 
	RawElement calculate(RawElement e1, RawElement e2);
	int getPriority();
	std::string getType();
	~BraketOp();
};
#endif // BRAKETOP_H
