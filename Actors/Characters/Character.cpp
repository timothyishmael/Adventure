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

Character::~Character(void)
{}

void Character::takeTurn(void)
{
	MyAttacks.equipmentOptions();
	MyAttacks.finalOptions();
	MyAttacks.getChoice();
}
