#ifndef ITEM_H
#define ITEM_H
#include<string>

class Item
{
	public:
		Item(void);
		~Item(void);
		std::string getName(void);
		std::string getDescription(void);
		float getWeight(void);
	protected:
		std::string name;
		std::string description;
		float weight;
};
#endif
