#ifndef TWO_HANDED_ATTACK_OPTION_H
#define TWO_HANDED_ATTACK_OPTION_H
#include"AttackOption.h"
class TwoHandedAttackOption : public AttackOption
{
	public:
		TwoHandedAttackOption(void);
		~TwoHandedAttackOption(void);
	
		void equipmentOptions(void) const;
		void getChoice(void) const;
};
#endif
