#ifndef MAGICIAN_H
#define MAGICIAN_H
#include<iostream>
#include<string>
#include"Class.h"

class Magician : public Class
{
	public:
		Magician(void);
		Magician(int lvl);
		~Magician(void);

		std::string getClass(void);
		std::string getLclass(void);
};		
#endif
