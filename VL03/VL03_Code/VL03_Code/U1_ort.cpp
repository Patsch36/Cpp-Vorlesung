#include "U1_ort.h"

U1_ort::U1_ort(std::string name, coord __coord) :
	_name(name), 
	_coord(__coord)
{
}

void U1_ort::visit()
{
	std::cout << _name << _coord << std::endl;
}




std::ostream& operator<<(std::ostream& os, coord _coord)
{
	os << "(" << _coord._x << ", " << _coord._y << ") ";
	return os;
}
