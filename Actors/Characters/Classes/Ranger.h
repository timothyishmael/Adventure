#ifndef RANGER_H
#define RANGER_H
#include<iostream>
#include<string>
#include"Class.h"

class Ranger : public Class
{
	public:
		Ranger(void);
		Ranger(int lvl);
		~Ranger(void);

		std::string getClass(void);
		std::string getLclass(void);
};		
#endif
