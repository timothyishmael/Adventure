#include"NakedAttackOption.h"
#include<iostream>
#include<string>
#include"TurnCommand.h"
#include"StrikeCommand.h"
#include"FinalCommands.h"

NakedAttackOption::NakedAttackOption(void)
{
	actionMap['S'] = createStrikeCommand();
	actionMap['s'] = createStrikeCommand();
	actionMap['G'] = createGrappleCommand();
	actionMap['g'] = createGrappleCommand();
}

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
