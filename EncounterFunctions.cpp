#include"EncounterFunctions.h"

void enterEncounter(void)
{
	std::cout << "Your party is attacked by a group containing " << listEnemines() << "." << std::endl;
}

void winEncounter(void)
{
	std:cout << "Your party has defeated the enemies!" << std::endl;
}

void fleeEncounter(void)
{
	std::cout << "Your surviving members have successfully fled from the enemies." << std::endl;
}

void defeatedByEncounter(void)
{
	std::cout << "Valiant or not, your party has fallen in battle..." << std::endl;
}

void tryToRun(void)
{
	srand(time(0));
}

void monsterAttack(Monster attacker, Character defender)
{
	std::cout << attacker.getUppercaseName() << " " << attacker.getAttackAction() << " " << defender.getName() << std::endl;
	
}

void characterMeleeAttack(Character attacker, Monster defender)
{
	std::cout << attacker.getName() << " " << attacker.myOutfit.primary.getAttackAction() << " " defender.getLowercaseName() << std::endl;
}

void characterRangedAttack(Character attacker, Monster defender)
{
	std::cout << attacker.getName() << " " << attacker.myOutfit.ranged.getAttackAction() << " " defender.getLowercaseName() << std::endl;
}

bool decideMeleeAttack(Actor attacker, Actor defender) const
{
	if(attacker.getMeleeAttack() > defender.getArmorClass()){
		return true;
	}
}

bool decideRangedAttack(Actor attacker, Actor defender) const
{
	if(attacker.getRangedAttack() > defender.getArmorClass()){
		return true;
	}
}