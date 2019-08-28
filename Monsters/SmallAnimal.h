#ifndef SMALL_ANIMAL_H
#define SMALL_ANIMAL_H
#include<string>
#include"Animal.h"
class SmallAnimal : public Animal
{
	public:
		SmallAnimal(void);
		SmallAnimal(int);
		~SmallAnimal(void);
};
#endif
