#include"Fighter.h"

Fighter::Fighter(void)
{}

Fighter::Fighter(int lvl):
	Class(lvl)
{}

Fighter::~Fighter(void)
{}

std::string Fighter::getClass(void)
{
	return "Fighter";
}

std::string Fighter::getLclass(void)
{
	return "fighter";
}
