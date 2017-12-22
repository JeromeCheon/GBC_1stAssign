#include <iostream> 
#include "Calculator.h"

int main(int argc, char* argv[])
{
	Calculator* cal = new Calculator("(13+2)");
	std::cout << cal->getValue() << std::endl;

	//cal->setString("3*(2+3)");
	//std::cout << cal->getValue() << std::endl;
	delete cal;
}