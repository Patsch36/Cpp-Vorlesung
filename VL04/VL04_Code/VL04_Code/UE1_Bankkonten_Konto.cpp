#include "UE1_Bankkonten_Konto.h"

namespace banking {

	std::string UE1_Bankkonten_Konto::kontotypToText()
	{
		switch (this->_typ)
		{
		case kontotyp::GIRO: return "Girokonto"; break;
		case kontotyp::TAGESGELD: return "Tagesgeldkonto"; break;
		case kontotyp::BAUSPAR: return "Bausparvertrag"; break;
		}
	}


	UE1_Bankkonten_Konto::UE1_Bankkonten_Konto(kontotyp typ, int blz, float startbetrag, float zinssatz) :
		_typ(typ), _blz(blz), _guthaben(startbetrag), _zinssatz(zinssatz)
	{
		std::mt19937 generator(time(0));
		this->_kontonummer = generator();
	}


	void UE1_Bankkonten_Konto::readValues()
	{
		std::cout << "Kontonummer:\t " << this->_kontonummer << std::endl 
			<< "Kontotyp:\t " << kontotypToText() << std::endl
			<< "Bankleitzahl:\t " << this->_blz << std::endl 
			<< "Zinssatz:\t " << this->_zinssatz << std::endl << std::endl
			<< "Aktueller Kontostand: " << this->_guthaben << " Euro" << std::endl;
	}

	void UE1_Bankkonten_Konto::addMoney(float betrag)
	{
		if (betrag <= 0)
			std::cout << "Nur positive Beträge einzahlen!" << std::endl << std::endl;
		this->_guthaben += betrag;
	}
}

