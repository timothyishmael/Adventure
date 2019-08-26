#ifndef MONSTER_H
#define MONSTER_H
#include<string>
#include<array>
#include"Actor.h"

class Monster : public Actor
{
	public:
		Monster(void);
		Monster(int);
		~Monster(void);
		
		std::string getUppercaseName(void) const;
		std::string getLowercaseName(void) const;
		std::string getAttackAction(void);
		
		void takeTurn(void);
		
	protected:
		std::string uppercaseName;
		std::string lowercaseName;
		std::array <std::string, int> attackActions;
};
#endif
