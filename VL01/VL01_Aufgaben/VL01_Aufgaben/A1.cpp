#include "A1.h"

const std::string a1::Person::_greeting[4] = { "Hallo", "Hello", "Salut", "Ciao" };

a1::Person::Person(std::string name, __nation nation)
	: _name(name)
	, _nation(nation)
{
}

void a1::Person::greet(Person* Other)
{
	std::cout << _greeting[int(Other->_nation)] << " " << Other->getName() << "!\n" << std::endl;
}

std::string a1::Person::getName()
{
	return _name;
}
