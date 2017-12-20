#include <iostream>
#include "Parser.h"
#include <string>
#include <vector>

using namespace std;
vector<string> init;
vector<string> aft;

Parser::Parser(string str){
	for (int i = 0; i < str.size(); i++) {
		string arg = str.substr(i, 1);
		init.push_back(arg);
	}
	int tmp=0;
	for(int i=0; i< init.size(); i++){
		if(init[i].compare("(") == 0 ||init[i].compare(")") == 0 ||init[i].compare("+") == 0 ||init[i].compare("-") == 0 ||init[i].compare("*") == 0 ||init[i].compare("/") == 0 ||init[i].compare("%") == 0){
			int len = i -tmp;
			if(len > 0){
				string args = str.substr(tmp, len);
				aft.push_back(args);
				aft.push_back(init[i].c_str());
				tmp = i +1;
}
else{
	atf.push_back(init[i].c_str());
	tmp++;
}
}
}
}
