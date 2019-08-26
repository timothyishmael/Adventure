#ifndef CLASS_H
#define CLASS_H
#include<string>
#include"Actor.h"

class Class : public Actor
{
	public:
		Class(void);
		Class(int lvl);
		virtual ~Class(void);
		
		virtual std::string getClass(void) = 0;
		virtual std::string getLclass(void) = 0;
		virtual void takeTurn(void) = 0;
};
#endif
