#ifndef DOUBLE_WEAPON_OPTION_H
#define DOUBLE_WEAPON_OPTION_H
#include"AttackOption.h"
class DoubleWeaponOption : public AttackOption
{
	public:
		DoubleWeaponOption(void);
		~DoubleWeaponOption(void);

		void equpimentOptions(void) const;
		void getChoice(void) const;
};
