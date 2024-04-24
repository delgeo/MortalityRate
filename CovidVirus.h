#pragma once
#include "MortalityRate.h"
class CovidVirus :
    public MortalityRate
{
public:
    float GetMortalityRate();
};

