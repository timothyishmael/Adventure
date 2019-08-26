#ifndef ENCOUNTER_H
#define ENCOUNTER_H
#include"EncounterFunctions.h"

class Encounter
{
	public:
		Encounter(void);
		~Encounter(void);
	
	private:
		Actor * enemyParty;
		Actor * livingEnemyParty;
		Actor * characterParty;
		Actor * livingCharacterParty;
};
#endif