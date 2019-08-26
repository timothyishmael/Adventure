#ifndef PALADIN_H
#define PALADIN_H
#include<string>
#include"Class.h"

class Paladin : public Class
{
	public:
		Paladin(void);
		Paladin(int lvl);
		~Paladin(void);

		std::string getClass(void);
		std::string getLclass(void);
};
#endif
