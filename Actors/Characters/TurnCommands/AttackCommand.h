#ifndef ATTACK_COMMAND_H
#define aTTACK_COMMAND_H
#include"TurnCommand.h"

class AttackCommand : public TurnCommand
{
	public:
		AttackCommand(void);
		~AttackCommand(void);

		void execute(void);
};
#endif
