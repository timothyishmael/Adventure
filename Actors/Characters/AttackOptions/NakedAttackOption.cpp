#include"NakedAttackOption.h"

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
	std::cout << "Select option: ";
	std::cin >>
}
