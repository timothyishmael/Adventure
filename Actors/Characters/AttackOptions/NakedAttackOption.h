#ifndef NAKED_ATTACK_OPTION
#define NAKED_ATTACK_OPTION
#include"AttackOption.h"

class NakedAttackOption : public AttackOption
{
	public:
		NakedAttackOption(void);
		~NakedAttackOption(void);
		
		void equipmentOptions(void) const;
		void getChoice(void) const;
};

#endif
		
