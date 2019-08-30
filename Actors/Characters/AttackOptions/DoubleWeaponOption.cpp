#include"DoubleWeaponOption.h"
#include<iostream>
#include<string>

DoubleWeaponOption::DoubleWeaponOption(void)
{}

DoubleWeaponOption::~DoubleWeaponOption(void)
{}

void DoubleWeaponOption::equipmentOptions(void) const
{
	std::cout << "(A)ttack" << std::endl << "(F)ull Attack" << std::endl;
}

void DoubleAttackOption::getChoice(void) const
{
	std::string input;
	std::getline(std::cin, input);
}

