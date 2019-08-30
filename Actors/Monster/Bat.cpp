#include<iostream>
#include"Bat.h"

Bat::Bat(void):
	SmallAnimal()
{
	increaseAgility(2);
	this->uppercaseName = "A bat";
 	this->lowercaseName = "a bat";
	this->attackActions = {"bites", "swoops at"};
	this->cr = 1/8;
}

Bat::Bat(int lvl):
	SmallAnimal(lvl)
{
	increaseAgility(2);
	this->uppercaseName = "A bat";
 	this->lowercaseName = "a bat";
	this->attackActions = {"bites", "swoops at"};
	this->cr = 1/8;
}

Bat::~Bat(void)
{}

void Bat::takeTurn(void)
{
	std::cout << "Bat attacks!" << std::endl;
}
