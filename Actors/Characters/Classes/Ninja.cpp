#include"Ninja.h"

Ninja::Ninja(void)
{}

Ninja::Ninja(int lvl):
	Class(lvl)
{}

Ninja::~Ninja(void)
{}

std::string Ninja::getClass(void)
{
	return "Ninja";
}

std::string Ninja::getLclass(void)
{
	return "ninja";
}
