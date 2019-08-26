#ifndef ATTACK_OPTION_H
#define ATTACK_OPTION_H
#include<string>

class Attack_Option
{
	public:
		Attack_Option(void);
		virtual ~Attack_Option(void);
		
	protected:
		void firstOptions(void);
		void * equipmentOptions(void) = 0;
		void * finalOptions(void);
		void * getChoice(void) = 0;
};

#endif