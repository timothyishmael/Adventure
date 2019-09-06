#ifndef RUN_COMMAND_H
#define RUN_COMMAND_H
#include"TurnCommand.h"

class RunCommand : public TurnCommand
{
	public:
		RunCommand(void);
		~RunCommand(void);

		void execute(void);
};
#endif
