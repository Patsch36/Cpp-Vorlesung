#pragma once
#include <string>

class Fortbewegungsmittel
{
	std::string m_name;
public:
	Fortbewegungsmittel(std::string name) : m_name(name) {}
	virtual int move();
	std::string getName();
};

