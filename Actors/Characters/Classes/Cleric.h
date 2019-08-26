#ifndef CLERIC_H
#define CLERIC_H
#include<iostream>
#include<string>
#include"Class.h"

class Cleric : public Class
{
	public:
		Cleric(void);
		Cleric(int lvl);
		~Cleric(void);

		std::string getClass(void);
		std::string getLclass(void);
};		
#endif
