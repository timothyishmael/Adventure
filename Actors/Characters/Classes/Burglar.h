#ifndef BURGLAR_H
#define BURGLAR_H
#include<iostream>
#include<string>
#include"Class.h"

class Burglar : public Class
{
	public:
		Burglar(void);
		Burglar(int lvl);
		~Burglar(void);

		std::string getClass(void);
		std::string getLclass(void);
};		
#endif
