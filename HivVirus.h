#pragma once
#include "MortalityRate.h"
class HivVirus :
    public MortalityRate
{
public:
    float GetMortalityRate();
};

