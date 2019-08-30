#ifndef SWORD_AND_SHIELD_OPTION_H
#define SWORD_AND_SHIELD_OPTION_H
#include"AttackOption.h"
class SwordAndShieldOption : public AttackOption
{
	public:
		SwordAndShieldOption(void);
		~SwordAndShieldOption(void);

		void equipmentOption(void) const;
		void getChoice(void) const;
};
#endif
