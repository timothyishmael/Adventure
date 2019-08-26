#ifndef TURN_COMMANDS_H
#define TURN_COMMANDS_H
#include"EncounterFunctions.h"

class Turn_Commands
{
	public:
		Turn_Commands(void);
		~Turn_Commands(void);
		
	private:
		void Attack(void);
		void Grapple(void);
		void Cast(void);
		void Items(void);
		void Defend(void);
		void Run(void);
};
#endif