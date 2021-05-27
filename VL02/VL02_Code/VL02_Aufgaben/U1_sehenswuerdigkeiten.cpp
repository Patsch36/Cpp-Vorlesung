#include "U1_sehenswuerdigkeiten.h"


U1_sehenswuerdigkeiten::U1_sehenswuerdigkeiten(std::string name, coord __coord, std::string sehenswertes) :
	U1_ort(name, __coord),
	_sehenswertes(sehenswertes)
{
}

void U1_sehenswuerdigkeiten::visit()
{
	std::cout << _name << _coord << "Hier sieht man " << _sehenswertes << "." << std::endl;
}
