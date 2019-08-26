#ifndef RACE_H
#define RACE_H
#include<string>
#include"Actor.h"
#include"RacialAbilites.h"

class Race
{
	public:
		Race(void);
		virtual ~Race(void);
		virtual std::string getRace(void) = 0;
	protected:
		RacialAbility * racialAbility;
};
#endif
