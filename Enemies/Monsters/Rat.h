#ifndef RAT_H
#define RAT_H
#include "SmallAnimal.h"

class Rat : public SmallAnimal
{
	public:
		Rat(void);
		Rat(int lvl);
		~Rat(void);
		void takeTurn(void);
};
#endif
