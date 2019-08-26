#ifndef HUMAN_H
#define HUMAN_H
#include"Race.h"

class Human : public Race
{
	public:
		Human(void);
		~Human(void);
		std::string getRace(void);
};
#endif
