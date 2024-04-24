#include "BirdFlu.h"

float BirdFlu::GetMortalityRate() {
	return ((death / cases)*100);
}