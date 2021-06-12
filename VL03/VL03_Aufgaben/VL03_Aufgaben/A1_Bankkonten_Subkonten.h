#pragma once
#include "A1_Bankkonten_Konto.h"
class A1_Bankkonten_Giro :
    public A1_Bankkonten_Konto
{
public:
    A1_Bankkonten_Giro(int blz, float startbetrag, float zinssatz);

    void addMoney(float betrag);
};

class A1_Bankkonten_Bauspar :
    public A1_Bankkonten_Konto
{
    int _bausparsumme;
public:
    A1_Bankkonten_Bauspar(int blz, float startbetrag, float zinssatz, int bausparsumme);

    void addMoney(float betrag);
};

class A1_Bankkonten_Tagesgeld :
    public A1_Bankkonten_Konto
{
    int _mindestlaufzeit;
public:
    A1_Bankkonten_Tagesgeld(int blz, float startbetrag, float zinssatz, int mindestlaufzeit);

    void addMoney(float betrag);
};