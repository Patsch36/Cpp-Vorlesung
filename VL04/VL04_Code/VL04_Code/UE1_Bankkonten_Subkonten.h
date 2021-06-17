#pragma once
#include "UE1_Bankkonten_Konto.h"

namespace banking {

    class UE1_Bankkonten_Giro :
        public UE1_Bankkonten_Konto
    {
    public:
        UE1_Bankkonten_Giro(int blz, float startbetrag, float zinssatz);

        void addMoney(float betrag);
    };

    class UE1_Bankkonten_Bauspar :
        public UE1_Bankkonten_Konto
    {
        int _bausparsumme;
    public:
        UE1_Bankkonten_Bauspar(int blz, float startbetrag, float zinssatz, int bausparsumme);

        void addMoney(float betrag);
    };

    class UE1_Bankkonten_Tagesgeld :
        public UE1_Bankkonten_Konto
    {
        int _mindestlaufzeit;
    public:
        UE1_Bankkonten_Tagesgeld(int blz, float startbetrag, float zinssatz, int mindestlaufzeit);

        void addMoney(float betrag);
    };
}