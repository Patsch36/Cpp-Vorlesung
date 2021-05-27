#include <iostream>
#include <random>

#include "Tesla.h"
#include "Trabbi.h"
#include "Horse.h"


Fortbewegungsmittel* chooseFortbewegungsmittel()
{
	switch (rand() % 3)
	{
	case 0: return new Horse();
	case 1: return new Tesla();
	case 2:return new Trabbi();
	}
}

int main_BSP()
{
	for (int i = 0; i < 10; i++) 
	{
		Fortbewegungsmittel* mittel = chooseFortbewegungsmittel();
		std::cout << mittel->move() << std::endl;
		std::cout << mittel->getName() << std::endl;
	}
	

	return 0;
}