#pragma once
#include "Fortbewegungsmittel.h"
class Horse :
    public Fortbewegungsmittel
{
public:
    int move() override;
    Horse();
};

