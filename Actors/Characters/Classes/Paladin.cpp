#include"Paladin.h"

Paladin::Paladin(void)
{}

Paladin::Paladin(int lvl):
	Class(lvl)
{}

Paladin::~Paladin(void)
{}

std::string Paladin::getClass(void)
{
	return "Paladin";
}

std::string Paladin::getLclass(void)
{
	return "paladin";
}

