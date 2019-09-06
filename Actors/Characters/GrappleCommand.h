#ifndef GRAPPLE_COMMAND_H
#define GRAPPLE_COMMAND_H
#include"TurnCommand.h"

class GrappleCommand : public TurnCommand
{
	public:
		GrappleCommand(void);
		~GrappleCommand(void);

		void execute(void);
};
#endif
