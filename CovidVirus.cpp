#include "CovidVirus.h"

float CovidVirus::GetMortalityRate() {
	return ((death / cases) * 100);
}