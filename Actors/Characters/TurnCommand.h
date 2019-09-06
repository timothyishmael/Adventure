#ifndef TURN_COMMAND_H
#define TURN_COMMAND_H
#include"EncounterFunctions.h"

class TurnCommand
{
	public:
		TurnCommand(void);
		virtual ~TurnCommand(void);

		virtual void execute(void) = 0;
};
#endif
