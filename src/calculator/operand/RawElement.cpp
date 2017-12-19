#include <iostream>
#include <string.h>
class RawElement{

public:
	RawElement(){
		std::cout<< "RawElement() constructor" << std::endl; }
	~RawElement(){ std::cout<< "RawElement() destructor" << std::endl; }
	virtual double getValue() = 0; // pure virtual fuction.
	static RawElement make(string str){
	//string to integer -> std::stoi(String)
	//string to float -> std::stof(String)
		int integer_str = stoi(str);
		
	}
	string getType();
};
