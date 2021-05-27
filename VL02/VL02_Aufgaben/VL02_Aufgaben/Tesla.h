#pragma once
#include "car.h"
class Tesla :
    public car
{
public:
    int move() override;
    Tesla();
};

