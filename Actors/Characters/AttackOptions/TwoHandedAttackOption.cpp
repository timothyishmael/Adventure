#include"TwoHandedAttackOption.h"
#include<iostream>
#include<string>

TwoHandedAttackOption::TwoHandedAttackOption(void)
{}

TwoHandedAttackOption::~TwoHandedAttackOption(void)
{}

void TwoHandedAttackOption::equpimentOptions(void) const
{
	std::cout << "(A)ttack" << std::endl "(P)ummel" << std::endl;
}

void TwoHandedAttackOption::getChoice(void) const
{
	std::string input;
	std::cout << "Select option: ";
}
