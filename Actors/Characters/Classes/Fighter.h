#ifndef FIGHTER_H
#define FIGHTER_H
#include<iostream>
#include<string>
#include"Class.h"

class Fighter : public Class
{
	public:
		Fighter(void);
		Fighter(int lvl);
		~Fighter(void);

		std::string getClass(void);
		std::string getLclass(void);
};		
#endif
