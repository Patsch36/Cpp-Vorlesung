#pragma once
#include "car.h"
class Trabbi :
    public car
{
public:
    int move() override;
    Trabbi();
};

