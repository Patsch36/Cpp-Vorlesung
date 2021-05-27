#include "U1_restaurants.h"

U1_restaurants::U1_restaurants(std::string name, coord __coord, std::string essen) :
	U1_ort(name, __coord),
	_essen(essen)
{
}

void U1_restaurants::visit()
{
	std::cout << _name << _coord << ". Hier kann man " << _essen << " essen." << std::endl;
}
