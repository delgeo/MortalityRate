#include "HivVirus.h"

float HivVirus::GetMortalityRate() {
	return ((death / cases) * 100);
}

