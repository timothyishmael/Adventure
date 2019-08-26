
#include<iostream>
#include"Bat.h"

int main()
{
	Bat bat1(1);

	std::cout << bat1.getName() << std::endl;
	bat1.takeTurn();

	return 0;
}
