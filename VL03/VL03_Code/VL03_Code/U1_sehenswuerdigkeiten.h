#pragma once
#include "U1_ort.h"
class U1_sehenswuerdigkeiten :
    public U1_ort
{
    std::string _sehenswertes;
public:
    U1_sehenswuerdigkeiten(std::string name, coord __coord, std::string sehenswertes);

    void visit() final;
};

