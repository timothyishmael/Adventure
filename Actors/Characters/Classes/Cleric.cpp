#include"Cleric.h"

Cleric::Cleric(void)
{}

Cleric::Cleric(int lvl):
	Class(lvl)
{}

Cleric::~Cleric(void)
{}

std::string Cleric::getClass(void)
{
	return "Cleric";
}

std::string Cleric::getLclass(void)
{
	return "cleric";
}
