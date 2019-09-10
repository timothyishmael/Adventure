#include<iostream>
#include"CharacterCreator.h"

CharacterCreator::CharacterCreator(void)
{}

CharacterCreator::~CharacterCreator(void)
{}

void CharacterCreator::creationStart(void) const
{
	std::cout << "A new story begins...\n" << std::endl;
	generateAttributes();
}

void generateAttributes(void)
{
	std::cout << 
