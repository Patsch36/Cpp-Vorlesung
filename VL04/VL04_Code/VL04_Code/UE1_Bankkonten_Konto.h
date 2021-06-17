#pragma once
#include <random>
#include <time.h>
#include <iostream>
#include <string>


namespace banking {

	enum class kontotyp{GIRO, TAGESGELD, BAUSPAR};

	class UE1_Bankkonten_Konto
	{
	protected:
		int _kontonummer;
		kontotyp _typ;
		const int _blz;
		float _guthaben;
		float _zinssatz;

		std::string kontotypToText();

	public:
		UE1_Bankkonten_Konto(kontotyp typ, int blz, float startbetrag, float zinssatz);

		// Werte einlesen
		void readValues();

		// Einzzahlen
		void addMoney(float betrag);
	};

}


