#ifndef BAT_H
#define BAT_H
#include<string>
#include"SmallAnimal.h"

class Bat : public SmallAnimal
{
	public:
		Bat(void);
		Bat(int lvl);
		~Bat(void);
		void takeTurn(void);
};
#endif
