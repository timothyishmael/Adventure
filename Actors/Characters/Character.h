#ifndef CHARACTER_H
#define CHARACTER_H
#include"Actor.h"
#include"Class.h"
#include"Race.h"
#include"Outfit.h"
#include"AllAttackOptions.h"
#include"GPFunctions.h"

class Character : public Actor
{
	public:
		Character(void);
		Character(int lvl);
		~Character(void);
		void takeTurn(void);

	private:
		Class myClass;
		Race myRace;
		Outfit myOutfit;
		CharData myData;
		AttackOption MyAttacks;
};
#endif
