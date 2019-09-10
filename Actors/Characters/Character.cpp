#include"Character.h"

Character::Character(void):
	Actor()
{
	this->cr = lvl/6;
	this->size = 4;
	this->myAttributes.increaseStrength(10);
	this->myAttributes.increaseStamina(10);
	this->myAttributes.increaseAgility(10);
	this->myAttributes.increaseAccuracy(10);
	this->myAttributes.increaseIntelligence(10);
	this->myAttributes.increaseWisdom(10);
	this->myAttributes.increaseCharisma(10);
	this->myAttributes.increaseLuck(10+luckModifier());
}

Character::Character(int lvl):
	Actor(lvl)
{
	this->cr = lvl/6;
	this->size = 4;
	this->myAttributes.increaseStrength(10);
	this->myAttributes.increaseStamina(10);
	this->myAttributes.increaseAgility(10);
	this->myAttributes.increaseAccuracy(10);
	this->myAttributes.increaseIntelligence(10);
	this->myAttributes.increaseWisdom(10);
	this->myAttributes.increaseCharisma(10);
	this->myAttributes.increaseLuck(10+luckModifier());
}

Character::Character(int str, int sta, int agi, int acc, int intel, int wis, int cha, int luc, int siz):
	Actor()
{
	this->lvl = 1;
	this->cr = 1/6;
	this->size = siz;
	this->myAttributes.increaseStrength(str);
	this->myAttributes.increaseStamina(sta);
	this->myAttributes.increaseAgility(agi);
	this->myAttributes.increaseAccuracy(acc);
	this->myAttributes.increaseIntelligence(intel);
	this->myAttributes.increaseWisdom(wis);
	this->myAttributes.increaseCharisma(cha);
	this->myAttributes.increaseLuck(luc);
}

Character::~Character(void)
{}

void Character::takeTurn(void)
{
//	MyAttacks.equipmentOptions();
//	MyAttacks.finalOptions();
//	MyAttacks.getChoice();
}

std::string Character::getMyName(void) const{
	return myName;
}
