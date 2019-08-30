#ifndef PURE_SHIELD_OPTION_H
#define PURE_SHIELD_OPTION_H
#include"AttackOption.h"
class PureShieldOption : public AttackOption
{
	public:
		PureShieldOption(void);
		~PureShieldOption(void);

		void equipmentOptions(void) const;
		void getChoice(void) const;
};
