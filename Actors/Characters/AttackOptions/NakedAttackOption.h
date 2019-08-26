#ifndef NAKED_ATTACK_OPTION
#define NAKED_ATTACK_OPTION
#include"AttackOptions.h"

class Naked_Attack_Option : public Attack_Option
{
	public:
		Naked_Attack_Option(void);
		~Naked_Attack_Option(void);
		
		void equipmentOptions(void) const;
		void getChoice(void) const;
};

#endif
		