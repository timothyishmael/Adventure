#include"Barbarian.h"

Barbarian::Barbarian(void)
{}

Barbarian::Barbarian(int lvl):
	Class(lvl)
{}

Barbarian::~Barbarian(void)
{}

std::string Barbarian::getClass(void)
{
	return "Barbarian";
}

std::string Barbarian::getLclass(void)
{
	return "barbarian";
}
