
#include<iostream>
#include"Character.h"

int main()
{
	Character char1(1);

	std::cout << char1.myAttributes.getStrength() << std::endl;

	return 0;
}
