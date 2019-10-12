#ifndef CHARACTER_CREATOR_H
#define CHARACTER_CREATOR_H
#include<string>
#include"Character.h"

class CharacterCreator
{
	public:
		void creationStart(void) const;
		void generateAttributes(void);
		void generateRace(void);
		void generateClasses(void);

		int getStr(void) const;
		int getSta(void) const;
		int getAgi(void) const;
		int getAcc(void) const;
		int getInt(void) const;
		int getWis(void) const;
		int getCha(void) const;
		int getLuc(void) const;
		std::string getRace(void) const;
		std::string getClass(void) const;

	private:
		int str, sta, agi, acc, intel, wis, cha, luc;
		std::string selectedRace, selectedClass;
};
#endif
