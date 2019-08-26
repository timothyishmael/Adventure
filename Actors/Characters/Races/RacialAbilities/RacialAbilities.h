#ifndef RACIALABILITY_H
#define RACIALABILITY_H
#include<string>

class RacialAbility
{
	public:
		RacialAbility(void);
		~RacialAbility(void);

		std::string getName(void);
		std::String getLname(void);
		std::string getDescription(void);

	protected:
		std::string name;
		std::string lname;
		std::string description;
};
#endif
