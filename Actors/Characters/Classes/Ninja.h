#ifndef NINJA_H
#define NINJA_H
#include<iostream>
#include<string>
#include"Class.h"

class Ninja : public Class
{
	public:
		Ninja(void);
		Ninja(int lvl);
		~Ninja(void);

		std::string getClass(void);
		std::string getLclass(void);
};		
#endif
