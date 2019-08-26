#include"GPFunctions.h"

int luckModifier(void){
	srand(time(0));
	return (rand() % 10) + 1;
}


