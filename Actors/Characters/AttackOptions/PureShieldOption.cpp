#include"PureShieldOption.h"
#include<iostream>
#include<string>

PureShieldOption::PureShieldOption(void)
{}

PureShieldOption::~PureShieldOption(void)
{}

void PureShieldOption::equipmentOptions(void) const
{ 
	std::cout << "(D)efend" << std::cout;
}

void PureShieldOption::getChoice(void) const
{
	std::string input;
	std::getline(std::cin, input);
}

