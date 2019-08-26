#include<string>
#include"Animal.h"

Animal::Animal(void):
	       Monster(0)
{	this->statRace = "animal";
	this->intelligence = 2;
	this->wisdom = 2;
	this->charisma =2;
	this->luck = 10+luckModifier();
}

Animal::Animal(int lvl):
	       Monster(lvl)
{	this->statRace = "animal";
	this->intelligence = 2;
	this->wisdom = 2;
	this->charisma =2;
	this->luck = 10+luckModifier();
}

Animal::~Animal(void)
{}
