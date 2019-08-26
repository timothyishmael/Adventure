#ifndef ATTRIBUTES_H
#define ATTRIBUTES_H

class Attributes
{
	public:
		Attributes(void);
		Attributes(int str, int sta, int agi, int acc, int inte, int wis, int cha, int luc);
		~Attributes(void);

		int getStrMod(void) const;
		int getStaMod(void) const;
		int getAgiMod(void) const;
		int getAccMod(void) const;
		int getIntMod(void) const;
		int getWisMod(void) const;
		int getChaMod(void) const;
		int getLucMod(void) const;

		int getStrength(void) const;
		void decreaseStrength(int);
		void increaseStrength(int);

		int getStamina(void) const;
		void decreaseStamina(int);
		void increaseStamina(int);

		int getAgility(void) const;
		void decreaseAgility(int);
		void increaseAgility(int);

		int getAccuracy(void) const;
		void decreaseAccuracy(int);
		void increaseAccuracy(int);

		int getIntelligence(void) const;
		void decreaseIntelligence(int);
		void increaseIntelligence(int);

		int getWisdom(void) const;
		void decreaseWisdom(int);
		void increaseWisdom(int);

		int getCharisma(void) const;
		void decreaseCharisma(int);
		void increaseCharisma(int);

		int getLuck(void) const;
		void decreaseLuck(int);
		void increaseLuck(int);



	private:
		int strength, stamina, agility, accuracy, intelligence, wisdom, charisma, luck;
		int maxStrength, maxStamina, maxAgility, maxAccuracy, maxIntelligence, maxWisdom, maxCharisma, maxLuck;
		int strMod, staMod, agiMod, accMod, intMod, wisMod, chaMod, lucMod;
		void calculateStr(void);
		void calculateSta(void);
		void calculateAgi(void);
		void calculateAcc(void);
		void calculateInt(void);
		void calculateWis(void);
		void calculateCha(void);
		void calculateLuc(void);
};
#endif
