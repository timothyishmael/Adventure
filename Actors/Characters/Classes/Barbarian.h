#ifndef BARBARIAN_H
#define BARBARIAN_H
#include<iostream>
#include<string>
#include"Class.h"

class Barbarian : public Class
{
	public:
		Barbarian(void);
		Barbarian(int lvl);
		~Barbarian(void);

		std::string getClass(void);
		std::string getLclass(void);
};		
#endif
