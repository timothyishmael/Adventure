#ifndef DEFEND_COMMAND_H
#define DEFEND_COMMAND_H
#include"TurnCommand.h"

class DefendCommand : public TurnCommand
{
	public:
		DefendCommand(void);
		~DefendCommand(void);

		void execute(void);
};
#endif
