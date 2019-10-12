#ifndef ITEM_COMMAND_H
#define ITEM_COMMAND_H
#include"TurnCommand.h"

class ItemCommand : TurnCommand
{
	public:
		ItemCommand(void);
		~ItemCommand(void);

		void execute(void);
};
#endif
