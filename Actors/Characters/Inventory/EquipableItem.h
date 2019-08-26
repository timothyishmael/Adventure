#ifndef EQUIPABLEITEM_H
#define EQUIPABLEITEM_H
#include<string>

class EquipableItem : public Item
{
	public:
		EquipableItem(void);
		virtual ~EquipableItem(void);
		virtual std::string getSlot(void) = 0;
	protected:
		std::string slot;
};
#endif
