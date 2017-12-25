#include <string>
#include <stack>
#include <vector>
#include <list>
#include "./Postfix.h"
#include "./Parser.h"
#include "../operator/Op.h"
#include "../Data.h"


Postfix::Postfix(){}

void Postfix::getPostfix() {
	Op eos;
	st.push(eos);
	fin.push_back(eos);
	for (int i = 0; i < fin.size(); i++) {
		if (fin[i] != eos) {
			if (fin[i].getType() == "float" || fin[i].getType() == "integer") {
				pf.push_back(fin[i]);
			}
			else if (fin[i].getType() == "closeB") {
				while (st.top().getType != "openB") {
					Data temp = st.top(); st.pop();
					pf.push_back(temp);
				}
				st.pop();
			}
			else {
				while (st.top().getPriority() >= fin[i].getPriority()) {
					pf.push_back(st.top()); st.pop();
				}
				st.push(fin[i]);
				if (fin[i].getType() == "openB") {
					st.top().setPriority(0);
				}
			}
		}
		else {
			while (st.top() != eos) {
				Op tmp = st.top(); st.pop();
				pf.push_back(tmp);
			}
		}
	}
}
