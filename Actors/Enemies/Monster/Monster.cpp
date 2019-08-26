#include<string>
#include<ctime>
#include<cstdlib>
#include"Monster.h"

Monster::Monster(void):
		Actor(0)
{this->statRace = "monster";}

Monster::Monster(int lvl):
		Actor(lvl)
{this->statRace = "monster";}

Monster::~Monster(void)
{}

std::string Actor::getUppercaseName(void) const 
{return uppercaseName;}

std::string Actor::getLowercaseName(void) const 
{return lowercaseName;}

std::string getAttackAction(void){
	srand(time(0));
	return attackActions[rand() % (attackActions.size() - 1)];
}

