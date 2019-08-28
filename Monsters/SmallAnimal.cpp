#include<string>
#include"SmallAnimal.h"

SmallAnimal::SmallAnimal():
		    Animal()
{	this->size = 1;
	this->hitPoints = 5;
	this->maxHitPoints = 5;
	this->statRace = "small animal";
	this->strength = 2;
	this->stamina = 2;
	this->agility = 15;
	this->accuracy = 14;
}

SmallAnimal::SmallAnimal(int lvl):
		    Animal(lvl)
{	this->size = 1;
	this->hitPoints = 5;
	this->maxHitPoints = 5;
	this->statRace = "small animal";
	this->strength = 2;
	this->stamina = 2;
	this->agility = 15;
	this->accuracy = 14;
}

SmallAnimal::~SmallAnimal(void)
{}
