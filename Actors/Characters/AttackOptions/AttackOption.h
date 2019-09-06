#ifndef ATTACK_OPTION_H
#define ATTACK_OPTION_H
#include<string>
#include<map>
#include"TurnCommand.h"
#include"ChangeStanceCommand.h"
#include"RunCommand.h"
#include"ItemCommand.h"

class AttackOption
{
	public:
		AttackOption(void);
		virtual ~AttackOption(void);
		
	protected:
		virtual void equipmentOptions(void) = 0;
		void finalOptions(void);
		virtual void getChoice(void) = 0;

		std::map<char, TurnCommand> actionMap;

		TurnCommand action;

		void createRunCommand(void);
		void createItemCommand(void);
		void createChangeStanceCommand(void);
};

#endif
