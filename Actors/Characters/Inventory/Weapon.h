#ifndef WEAPON_H
#define WEAPON_H
#include<string>
#include"EquipableItem.h"

class Weapon : public EquipableItem
{
	public:
		Weapon(void);
		virtual ~Weapon(void);
		
		std::string getAttackAction(void) const;
	protected:
		std::string attackAction;
};
#endif