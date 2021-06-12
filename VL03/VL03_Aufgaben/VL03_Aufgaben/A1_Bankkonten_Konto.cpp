#include "A1_Bankkonten_Konto.h"

std::string A1_Bankkonten_Konto::kontotypToText()
{
	switch (this->_typ)
	{
	case kontotyp::GIRO: return "Girokonto"; break;
	case kontotyp::TAGESGELD: return "Tagesgeldkonto"; break;
	case kontotyp::BAUSPAR: return "Bausparvertrag"; break;
	}
}


A1_Bankkonten_Konto::A1_Bankkonten_Konto() :
	_typ(kontotyp::BAUSPAR), _blz(11111), _guthaben(100), _zinssatz(0.5)
{
}

A1_Bankkonten_Konto::A1_Bankkonten_Konto(kontotyp typ, int blz, float startbetrag, float zinssatz) :
	_typ(typ), _blz(blz), _guthaben(startbetrag), _zinssatz(zinssatz)
{
	std::mt19937 generator(time(0));
	this->_kontonummer = generator();
}


void A1_Bankkonten_Konto::readValues()
{
	std::cout << "Kontonummer:\t " << this->_kontonummer << std::endl 
		<< "Kontotyp:\t " << kontotypToText() << std::endl
		<< "Bankleitzahl:\t " << this->_blz << std::endl 
		<< "Zinssatz:\t " << this->_zinssatz << std::endl << std::endl
		<< "Aktueller Kontostand: " << this->_guthaben << " Euro" << std::endl;
	std::cout << std::endl << std::endl;
}

void A1_Bankkonten_Konto::addMoney(float betrag)
{
	if (betrag <= 0)
		std::cout << "Nur positive Beträge einzahlen!" << std::endl << std::endl;
	this->_guthaben += betrag;
}
