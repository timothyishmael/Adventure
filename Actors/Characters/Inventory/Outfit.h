#ifndef OUTFIT_H
#define OUTFIT_H
#include<string>
#include"MeleeWeapon.h"
#include"Tool.h"
#include"RangedWeapon.h"

class Outfit
{
	public:
		Outfit(void);
		~Outfit(void);

		MeleeWeapon primary;
		Tool secondary;
		RangedWeapon ranged;
};
#endif
