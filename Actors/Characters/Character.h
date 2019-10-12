#ifndef CHARACTER_H
#define CHARACTER_H
#include"Actor.h"
#include"Class.h"
#include"Race.h"
//#include"Outfit.h"
//#include"AllAttackOptions.h"
//#include"GPFunctions.h"

class Character : public Actor
{
	public:
		Character(void);
		Character(int lvl);
		Character(int str, int sta, int agi, int acc, int intel, int wis, int cha, int luc, int siz);
		~Character(void);
		void takeTurn(void);

	private:
		//Class myClass;
		//Race myRace;
		//Outfit myOutfit;
		//CharData myData;
		//AttackOption MyAttacks;

		std::string myName;

		void setMyName(std::string);
		std::string getMyName(void) const;
};
#endif
