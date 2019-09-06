#ifndef CAST_COMMAND_H
#define CAST_COMMAND_H
#include"TurnCommand.h"

class CastCommand : public TurnCommand
{
	public:
		CastCommand(void);
		~CastCommand(void);

		void execute(void);
};
#endif
