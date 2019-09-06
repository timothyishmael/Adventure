#ifndef STRIKE_COMMAND_H
#define STRIKE_COMMAND_H
#include"TurnCommand.h"

class StrikeCommand : public TurnCommand
{
	public:
		StrikeCommand(void);
		~StrikeCommand(void);

		void execute(void);
};
#endif
