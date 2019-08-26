#ifndef ANIMAL_H
#define ANIMAL_H
#include<string>
#include"Monster.h"
#include"GPFunctions.h"

class Animal : public Monster
{
	public:
		Animal(void);
		Animal(int);
		~Animal(void);
};
#endif
