#include"SwordAndShieldOption.h"
#include<iostream>
#include<string>

SwordAndShieldOption::SwordAndShieldOption(void)
{}

SwordAndShieldOption::~SwordAndShieldOption(void)
{}

void SwordAndShieldOption::equipmentOptions(void) const
{

	std::cout << "(A)ttack" << "(B)ash" << std::endl << "(D)efend" << std::endl;
}

void SwordAndShieldOption::getChoice(void) const
{
	std::string input;
	std::getline(std::cin, input);
}

