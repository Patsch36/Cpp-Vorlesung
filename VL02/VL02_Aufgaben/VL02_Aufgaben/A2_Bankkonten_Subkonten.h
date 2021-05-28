#pragma once
#include "A2_Bankkonten_Konto.h"
class A2_Bankkonten_Giro :
    public A2_Bankkonten_Konto
{
public:
    A2_Bankkonten_Giro(int blz, float startbetrag, float zinssatz);

    void addMoney(float betrag);
};

class A2_Bankkonten_Bauspar :
    public A2_Bankkonten_Konto
{
    int _bausparsumme;
public:
    A2_Bankkonten_Bauspar(int blz, float startbetrag, float zinssatz, int bausparsumme);

    void addMoney(float betrag);
};

class A2_Bankkonten_Tagesgeld :
    public A2_Bankkonten_Konto
{
    int _mindestlaufzeit;
public:
    A2_Bankkonten_Tagesgeld(int blz, float startbetrag, float zinssatz, int mindestlaufzeit);

    void addMoney(float betrag);
};