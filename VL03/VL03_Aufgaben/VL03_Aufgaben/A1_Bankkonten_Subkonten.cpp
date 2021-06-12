#include "A1_Bankkonten_Subkonten.h"

A1_Bankkonten_Giro::A1_Bankkonten_Giro(int blz, float startbetrag, float zinssatz) :
	A1_Bankkonten_Konto(kontotyp::GIRO, blz, startbetrag, zinssatz)
{
}

void A1_Bankkonten_Giro::addMoney(float betrag)
{
	this->_guthaben += betrag;
}


A1_Bankkonten_Bauspar::A1_Bankkonten_Bauspar(int blz, float startbetrag, float zinssatz, int bausparsumme)
	: A1_Bankkonten_Konto(kontotyp::BAUSPAR, blz, startbetrag, zinssatz),
	_bausparsumme(bausparsumme)
{
}

void A1_Bankkonten_Bauspar::addMoney(float betrag)
{
	if (this->_bausparsumme >= this->_guthaben && betrag <= this->_bausparsumme - this->_guthaben)
		this->_guthaben += betrag;
	else
	{
		std::cout << "Auf den Bausparvertag können keine " << betrag << " Euro mehr Eingezahlt werden: Die Bausparsumme beträgt "
		<< this->_bausparsumme << " Euro, eingezahlt sind " << this->_guthaben << " Euro." << std::endl;
	}
}

A1_Bankkonten_Tagesgeld::A1_Bankkonten_Tagesgeld(int blz, float startbetrag, float zinssatz, int mindestlaufzeit) : 
	A1_Bankkonten_Konto(kontotyp::TAGESGELD, blz, startbetrag, zinssatz), _mindestlaufzeit(mindestlaufzeit)
{
}

void A1_Bankkonten_Tagesgeld::addMoney(float betrag)
{
	std::cout << "Es kann nicht mehr eingezahlt werden!" << std::endl;
}
