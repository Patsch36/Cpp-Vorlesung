#include "A2_Kanuteam_Klassen.h"
#include <iostream>

A2_Kanuteam::A2_Kanuteam(A2_Kanu* boot, A2_Person person)
{
	this->_counter++;
	this->_boot = boot;
	this->_personen++;
	if (this->_personen <= 5 && this->_personen >= 0)
	{
		_mitglieder[_personen] = person;
	}
	std::cout << "Erstelle Kanuteam" << std::endl;
}

A2_Kanuteam::~A2_Kanuteam()
{
	delete(_boot);
	delete(_mitglieder);

	std::cout << "Zerstöre Kanuteam" << std::endl;
}

A2_Kanu::A2_Kanu(A2_Kanuteam* team)
{
	this->_counter++;
	if (!this->_existing_team)
		this->_team = team;
	std::cout << "Erstelle Kanu" << std::endl;
}

A2_Kanu::~A2_Kanu()
{
	delete(_team);
	std::cout << "Zerstöre Kanu" << std::endl;
}

A2_Person::A2_Person()
{
	this->_counter++;
	std::cout << "Erstelle Person" << std::endl;
}

A2_Person::~A2_Person()
{
	std::cout << "Zerstöre Person" << std::endl;
}

void A2_Person::setKanuteam(A2_Kanuteam team)
{
	if (this->_team_count > 3 && this->_team_count <= 0)
	{
		this->_team_count++;
		this->_teams[_team_count] = team;

	}
}
