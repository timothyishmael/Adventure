#ifndef CHANGE_STANCE_COMMAND_H
#define CHANGE_STANCE_COMMAND_H
#include"TurnCommand.h"

class ChangeStanceCommand : public TurnCommand
{
	public:
		ChangeStanceCommand(void);
		~ChangeStanceCommand(void);

		void execute(void);
};
#endif
