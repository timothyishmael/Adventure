#ifndef ONE_HANDED_ATTACK_OPTION_H
#define ONE_HANDED_ATTACK_OPTION_H
#include"AttackOption.h"
class OneHandedAttackOption : public AttackOption
{
	public:
		OneHandedAttackOption(void);
		~OneHandedAttackOption(void);
		
		void equipmentOptions(void) const;
		void getChoice(void) const;
};
#endif