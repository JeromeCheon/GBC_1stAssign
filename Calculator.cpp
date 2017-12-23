#include "Calculator.h"
#include "Parser.h"
#include "Postfix.h"
#include "BinaryOp.h"
#include "Plus.h"
#include "Minus.h"
#include "Mul.h"
#include "Div.h"
#include "Mod.h"
#include <stack>
#include <vector>
#include <string>


Calculator::Calculator() {
}

Calculator::Calculator(std::string str) {
	std::cout << "Calculator Test" << std::endl;
	Parser req(str);
	req.getInfix(str);
	req.goPostfix();
}

double Calculator::getValue() {
	Postfix b;
	std::list <Data> postFix = b.getPf();
	std::stack <RawElement> ans;
	while (postFix.empty() == 0) { // empty()함수는 비어있으면 1을 반환
		if (postFix.front().getType() == "integer" || postFix.front().getType() == "float") { // RawElement의 일종이면 아래와 같이 처리.
			ans.push(*dynamic_cast<RawElement*>(&postFix.front()));
			postFix.pop_front();
		}
		// operand가 아니면 operator로, 각각의 상황에 맞게 처리
		else if (postFix.front().getType() == "Plus") {
			postFix.pop_front();
			RawElement tmp1 = ans.top(); ans.pop();
			ans.pop();
			RawElement tmp2 = ans.top(); ans.pop();
			ans.pop();
			Plus tests;
			RawElement answer = tests.calculate(tmp2, tmp1);
			ans.push(answer);
		}
		else if (postFix.front().getType() == "Minus") {
			postFix.pop_front();
			RawElement tmp1 = ans.top(); ans.pop();
			ans.pop();
			RawElement tmp2 = ans.top(); ans.pop();
			ans.pop();
			Minus tests;
			RawElement answer = tests.calculate(tmp2, tmp1);
			ans.push(answer);
		}
		else if (postFix.front().getType() == "Mul") {
			postFix.pop_front();
			RawElement tmp1 = ans.top();
			ans.pop();
			RawElement tmp2 = ans.top();
			ans.pop();
			Mul tests;
			RawElement answer = tests.calculate(tmp2, tmp1);
			ans.push(answer);
		}
		else if (postFix.front().getType() == "Div") {
			postFix.pop_front();
			RawElement tmp1 = ans.top(); ans.pop();
			ans.pop();
			RawElement tmp2 = ans.top(); ans.pop();
			ans.pop();
			Div tests;
			RawElement answer = tests.calculate(tmp2, tmp1);
			ans.push(answer);
		}
		else if (postFix.front().getType() == "Mod") {
			postFix.pop_front();
			RawElement tmp1 = ans.top(); ans.pop();
			ans.pop();
			RawElement tmp2 = ans.top(); ans.pop();
			ans.pop();
			Mod tests;
			RawElement answer = tests.calculate(tmp2, tmp1);
			ans.push(answer);
		}
	}
	return ans.top().getValue(); // RawElement의 getValue 메서드 이용??
}
void Calculator::setString(std::string str)
{
	Parser *req = new Parser(str);
	req->getInfix(str);
}