
#include"AttackOption.h"

AttackOption::AttackOption(void)
{}

AttackOption::~AttackOption(void)
{}

void AttackOption::firstOptions(void)
{
	std::cout << "(A)ttack" << std::endl;
}

void AttackOption::finalOptions(void)
{
	std::cout << "(D)efend" << std::endl << "(I)tems" << std::endl << "(R)un" << std::endl;
}