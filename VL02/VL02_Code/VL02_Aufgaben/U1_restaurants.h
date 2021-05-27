#pragma once
#include "U1_ort.h"
class U1_restaurants :
    public U1_ort
{
    std::string _essen;
public:
    U1_restaurants(std::string name, coord __coord, std::string essen);

    void visit() final;
};

