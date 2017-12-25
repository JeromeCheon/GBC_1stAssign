#include <iostream> 
#include "./calculator/Calculator.h"

int main(int argc, char* argv[])
{
	Calculator* cal = new Calculator("3+2");
	std::cout << cal->getValue() << std::endl;
	
	cal->setString("3*(2+3)");
	std::cout << cal->getValue() << std::endl;
	delete cal;
}

