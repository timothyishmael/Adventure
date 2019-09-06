
#include"AttackOption.h"

AttackOption::AttackOption(void)
{
	actionMap['R'] = createRunCommand();
	actionMap['r'] = createRunCommand();
	actionMap['I'] = createItemCommand();
	actionMap['i'] = createItemCommand();
	actionMap['C'] = createChangeStanceCommand();
	actionMap['c'] = createChangeStanceCommand();
}

AttackOption::~AttackOption(void)
{}

void AttackOption::finalOptions(void)
{
	std::cout << "(C)hange stance" << std::endl << "(I)tems" << std::endl << "(R)un" << std::endl;
}

void AttackOption::createRunCommand(void)
{
	action = new RunCommand;
}

void AttackOption::createItemCommand(void)
{
	action = new ItemCommand;
}

void AttackOption::createChangeStanceCommand(void)
{
	action = new ChangeStanceCommand;
}
