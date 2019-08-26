#include"Ranger.h"

Ranger::Ranger(void)
{}

Ranger::Ranger(int lvl):
	Class(lvl)
{}

Ranger::~Ranger(void)
{}

std::string Ranger::getClass(void)
{
	return "Ranger";
}

std::string Ranger::getLclass(void)
{
	return "ranger";
}
