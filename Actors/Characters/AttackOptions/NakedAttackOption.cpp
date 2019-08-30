#include"NakedAttackOption.h"
#include<iostream>
#include<string>

NakedAttackOption::NakedAttackOption(void)
{}

NakedAttackOption::~NakedAttackOption(void)
{}

void NakedAttackOption::equipmentOptions(void) const
{
	std::cout << "(S)trike" << std::endl << "(G)rapple" << std::endl;
}

void NakedAttackOption::getChoice(void) const
{
	std::string input;
	std::cout << "Select option: ";
	std::getline(std::cin, input);
}
