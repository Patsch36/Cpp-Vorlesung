#include "UE1_Bankkonten_Subkonten.h"

namespace banking {

	UE1_Bankkonten_Giro::UE1_Bankkonten_Giro(int blz, float startbetrag, float zinssatz) :
		UE1_Bankkonten_Konto(kontotyp::GIRO, blz, startbetrag, zinssatz)
	{
	}

	void UE1_Bankkonten_Giro::addMoney(float betrag)
	{
		this->_guthaben += betrag;
	}


	UE1_Bankkonten_Bauspar::UE1_Bankkonten_Bauspar(int blz, float startbetrag, float zinssatz, int bausparsumme)
		: UE1_Bankkonten_Konto(kontotyp::BAUSPAR, blz, startbetrag, zinssatz),
		_bausparsumme(bausparsumme)
	{
	}

	void UE1_Bankkonten_Bauspar::addMoney(float betrag)
	{
		if (this->_bausparsumme >= this->_guthaben && betrag <= this->_bausparsumme - this->_guthaben)
			this->_guthaben += betrag;
		else
		{
			std::cout << "Auf den Bausparvertag können keine " << betrag << " Euro mehr Eingezahlt werden: Die Bausparsumme beträgt "
			<< this->_bausparsumme << " Euro, eingezahlt sind " << this->_guthaben << " Euro." << std::endl;
		}
	}

	UE1_Bankkonten_Tagesgeld::UE1_Bankkonten_Tagesgeld(int blz, float startbetrag, float zinssatz, int mindestlaufzeit) : 
		UE1_Bankkonten_Konto(kontotyp::TAGESGELD, blz, startbetrag, zinssatz), _mindestlaufzeit(mindestlaufzeit)
	{
	}

	void UE1_Bankkonten_Tagesgeld::addMoney(float betrag)
	{
		std::cout << "Es kann nicht mehr eingezahlt werden!" << std::endl;
	}
}

