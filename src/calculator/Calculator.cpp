#include "./Calculator.h"
#include "./parser/Parser.h"
#include "./parser/Postfix.h"
#include "./operator/BinaryOp.h"
#include "./operator/Plus.h"
#include "./operator/Minus.h"
#include "./operator/Mul.h"
#include "./operator/Div.h"
#include "./operator/Mod.h"
#include <stack>
#include <vector>

std::stack <Data> ans;

Calculator::Calculator() {}

Calculator::Calculator(std::string str) {
	Parser req(str);
	req.getInfix(str);
	req.goPostfix();
}

double Calculator::getValue() {
	while (pf.size()!=0) {
		if (pf.front().getType() == "integer" || pf.front().getType() == "float") {
			ans.push(pf.front());
			pf.pop_front();
		}
		else if(pf.front().getType()=="Plus") {
			pf.pop_front();
			RawElement tmp1 = ans.top();
			ans.pop();
			RawElement tmp2 = ans.top();
			ans.pop();
			Plus tests;
			RawElement answer = tests.calculate(tmp2, tmp1);
			ans.push(answer);
		}
		else if(pf.front().getType() == "Minus") {
			pf.pop_front();
			RawElement tmp1 = ans.top();
			ans.pop();
			RawElement tmp2 = ans.top();
			ans.pop();
			Minus tests;
			RawElement answer = tests.calculate(tmp2, tmp1);
			ans.push(answer);
		}
		else if(pf.front().getType() == "Mul") {
			pf.pop_front();
			RawElement tmp1 = ans.top();
			ans.pop();
			RawElement tmp2 = ans.top();
			ans.pop();
			Mul tests;
			RawElement answer = tests.calculate(tmp2, tmp1);
			ans.push(answer);
		}
		else if ( pf.front().getType == "Div") {
			pf.pop_front();
			RawElement tmp1 = ans.top();
			ans.pop();
			RawElement tmp2 = ans.top();
			ans.pop();
			Div tests;
			RawElement answer = tests.calculate(tmp2, tmp1);
			ans.push(answer);
		}
		else if (pf.front().getType == "Mod") {
			pf.pop_front();
			RawElement tmp1 = ans.top();
			ans.pop();
			RawElement tmp2 = ans.top();
			ans.pop();
			Mod tests;
			RawElement answer = tests.calculate(tmp2, tmp1);
			ans.push(answer);
		}
	}
	return ans.top();
}

void Calculator::setString(std::string str)
{
	Parser *req = new Parser(str);
	req->getInfix(str);
}
