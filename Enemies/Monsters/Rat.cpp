#include"Rat.h"
#include<iostream>

Rat::Rat(void):
	SmallAnimal()
{
	this->uppercaseName = "A rat";
	this->lowercaseName = "a rat";
	this->attackActions = {"bites"};
	this->cr = 1/8;
}

Rat::Rat(int lvl)
{
	this->uppercaseName = "A rat";
	this->lowercaseName = "a rat";
	this->attackActions = {"bites"};
	this->cr = 1/8;
}

Rat::~Rat(void)
{}

void Rat::takeTurn(void)
{
	std::cout << "Rat attacks!" << std::endl;
}

