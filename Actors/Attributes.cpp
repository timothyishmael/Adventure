#include"Attributes.h"

Attributes::Attributes(void):
	maxStrength (0),
	maxStamina (0),
	maxAgility (0),
	maxAccuracy (0),
	maxIntelligence (0),
	maxWisdom (0),
	maxCharisma (0),
	maxLuck (0),
	strength (0),
	stamina (0),
	agility (0),
	accuracy (0),
	intelligence (0),
	wisdom (0),
	charisma (0),
	luck (0),
	strMod (0),
	staMod (0),
	agiMod (0),
	accMod (0),
	intMod (0),
	wisMod (0),
	chaMod (0),
	lucMod (0)
{}

Attributes::Attributes(int str, int sta, int agi, int acc, int inte, int wis, int cha, int luc):
	maxStrength (str),
	maxStamina (sta),
	maxAgility (agi),
	maxAccuracy (acc),
	maxIntelligence (inte),
	maxWisdom (0wis,
	maxCharisma (cha),
	maxLuck (luc),
	strength (str),
	stamina (sta),
	agility (agi),
	accuracy (acc),
	intelligence (inte),
	wisdom (wis),
	charisma (cha),
	luck (luc),
	strMod (0),
	staMod (0),
	agiMod (0),
	accMod (0),
	intMod (0),
	wisMod (0),
	chaMod (0),
	lucMod (0)
{}

Attributes::~Attributes(void)
{}

int Attributes::getStrMod(void) const {return strMod;}
int Attributes::getStaMod(void) const {return staMod;}
int Attributes::getAgiMod(void) const {return agiMod;}
int Attributes::getAccMod(void) const {return accMod;}
int Attributes::getIntMod(void) const {return intMod;}
int Attributes::getWisMod(void) const {return wisMod;}
int Attributes::getChaMod(void) const {return chaMod;}
int Attributes::getLucMod(void) const {return lucMod;}

int Attributes::getStrength(void) const {return strength;}
void Attributes::decreaseStrength(int amount) {maxStrength -= amount; calculateStr();}
void Attributes::increaseStrength(int amount) {maxStrength += amount; calculateStr();}

int Attributes::getStamina(void) const {return stamina;}
void Attributes::decreaseStamina(int amount) {maxStamina -= amount; calculateSta();}
void Attributes::increaseStamina(int amount) {maxStamina += amount; calculateSta();}

int Attributes::getAgility(void) const {return agility;}
void Attributes::decreaseAgility(int amount) {maxAgility -= amount; calculateAgi();}
void Attributes::increaseAgility(int amount) {maxAgility += amount; calculateAgi();}

int Attributes::getAccuracy(void) const {return accuracy;}
void Attributes::decreaseAccuracy(int amount) {maxAccuracy -= amount; calculateAcc();}
void Attributes::increaseAccuracy(int amount) {maxAccuracy += amount; calculateAcc();}

int Attributes::getIntelligence(void) const {return intelligence;}
void Attributes::decreaseIntelligence(int amount) {maxIntelligence -= amount; calculateInt();}
void Attributes::increaseIntelligence(int amount) {maxIntelligence += amount; calculateInt();}

int Attributes::getWisdom(void) const {return wisdom;}
void Attributes::decreaseWisdom(int amount) {maxWisdom -= amount; calculateWis();}
void Attributes::increaseWisdom(int amount) {maxWisdom += amount; calculateWis();}

int Attributes::getCharisma(void) const {return charisma;}
void Attributes::decreaseCharisma(int amount) {maxCharisma -= amount; calculateCha();}
void Attributes::increaseCharisma(int amount) {maxCharisma += amount; calculateCha();}

int Attributes::getLuck(void) const {return luck;}
void Attributes::decreaseLuck(int amount) {maxLuck -= amount; calculateLuc();}
void Attributes::increaseLuck(int amount) {maxLuck += amount; calculateLuc();}

void Attribute::calculateStr(void) {strength = maxStrength - strMod;}
void Attribute::calculateSta(void) {stamina = maxStamina - staMod;}
void Attribute::calculateAgi(void) {agility = maxAgility - agiMod;}
void Attribute::calculateAcc(void) {accuracy = maxAccuracy - accMod;}
void Attribute::calculateInt(void) {intelligence = maxIntelligence - intMod;}
void Attribute::calculateWis(void) {wisdom = maxWisdom - wisMod;}
void Attribute::calculateCha(void) {charisma = maxCharisma - chaMod;}
void Attribute::calculateLuc(void) {luck = maxLuck - lucMod;}

