#include "A2_Bankkonten_Subkonten.h"

A2_Bankkonten_Giro::A2_Bankkonten_Giro(int blz, float startbetrag, float zinssatz) :
	A2_Bankkonten_Konto(kontotyp::GIRO, blz, startbetrag, zinssatz)
{
}

void A2_Bankkonten_Giro::addMoney(float betrag)
{
	this->_guthaben += betrag;
}


A2_Bankkonten_Bauspar::A2_Bankkonten_Bauspar(int blz, float startbetrag, float zinssatz, int bausparsumme)
	: A2_Bankkonten_Konto(kontotyp::BAUSPAR, blz, startbetrag, zinssatz),
	_bausparsumme(bausparsumme)
{
}

void A2_Bankkonten_Bauspar::addMoney(float betrag)
{
	if (this->_bausparsumme >= this->_guthaben && betrag <= this->_bausparsumme - this->_guthaben)
		this->_guthaben += betrag;
	else
	{
		std::cout << "Auf den Bausparvertag können keine " << betrag << " Euro mehr Eingezahlt werden: Die Bausparsumme beträgt "
		<< this->_bausparsumme << " Euro, eingezahlt sind " << this->_guthaben << " Euro." << std::endl;
	}
}

A2_Bankkonten_Tagesgeld::A2_Bankkonten_Tagesgeld(int blz, float startbetrag, float zinssatz, int mindestlaufzeit) : 
	A2_Bankkonten_Konto(kontotyp::TAGESGELD, blz, startbetrag, zinssatz), _mindestlaufzeit(mindestlaufzeit)
{
}

void A2_Bankkonten_Tagesgeld::addMoney(float betrag)
{
	std::cout << "Es kann nicht mehr eingezahlt werden!" << std::endl;
}
