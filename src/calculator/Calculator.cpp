#include "./Calculator.h"
#include "./parser/Parser.h"
#include "./parser/Postfix.h"
#include "./operator/BinaryOp.h"
#include "./operator/UnaryOp.h"
#include "./operator/Plus.h"
#include "./operator/Minus.h"
#include "./operator/Mul.h"
#include "./operator/Exp.h"
#include "./operator/Sin.h"
#include "./operator/Cos.h"
#include "./operator/Div.h"
#include "./operator/Mod.h"
#include <stack>
#include <vector>
#include <string>
#include <iostream>

Calculator::Calculator() {
}

Calculator::Calculator(std::string str) {
	Parser req(str);
	req.getInfix(str);
	postFix = req.goPostfix();
}

double Calculator::getValue() {
	//Postfix b;
	//std::list <Data> postFix = b.getPf();

	std::stack <RawElement> ans;
	while (postFix.empty() == 0) { // empty()함수는 비어있으면 1을 반환
		if (postFix.front().getType() == "integer" || postFix.front().getType() == "float") { // RawElement의 일종이면 아래와 같이 처리.
			ans.push(*static_cast<RawElement*>(&postFix.front()));
			postFix.pop_front();
		}
		// operand가 아니면 operator로, 각각의 상황에 맞게 처리
		else if (postFix.front().getType() == "Plus") {
			postFix.pop_front();
			RawElement tmp1 = ans.top(); ans.pop();
			RawElement tmp2 = ans.top(); ans.pop();
			Plus tests;
			RawElement answer = tests.calculate(tmp2, tmp1);
			ans.push(answer);
		}
		else if (postFix.front().getType() == "Minus") {
			postFix.pop_front();
			RawElement tmp1 = ans.top(); ans.pop();
			RawElement tmp2 = ans.top(); ans.pop();
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
			RawElement tmp2 = ans.top(); ans.pop();
			Div tests;
			RawElement answer = tests.calculate(tmp2, tmp1);
			ans.push(answer);
		}
		else if (postFix.front().getType() == "Mod") {
			postFix.pop_front();
			RawElement tmp1 = ans.top(); ans.pop();
			RawElement tmp2 = ans.top(); ans.pop();
			Mod tests;
			RawElement answer = tests.calculate(tmp2, tmp1);
			ans.push(answer);
		}
		else if (postFix.front().getType() == "Exp") {
			postFix.pop_front();
			RawElement tmp1 = ans.top();
			ans.pop();
			RawElement tmp2 = ans.top();
			ans.pop();
			Exp tests;
			RawElement answer = tests.calculate(tmp2, tmp1);
			ans.push(answer);
		}
		else if (postFix.front().getType() == "Sin") {
			postFix.pop_front();
			RawElement tmp1 = ans.top();
			ans.pop();
			Sin tests;
			RawElement answer = tests.calculate(tmp1);
			ans.push(answer);
		}
		else if (postFix.front().getType() == "Cos") {
			postFix.pop_front();
			RawElement tmp1 = ans.top();
			ans.pop();
			Cos tests;
			RawElement answer = tests.calculate(tmp1);
			ans.push(answer);
		}
	}
	return ans.top().getValue(); // RawElement의 getValue 메서드 이용??
}
void Calculator::setString(std::string str)
{
	Parser test(str);
	test.getInfix(str);
	postFix = test.goPostfix();
}
