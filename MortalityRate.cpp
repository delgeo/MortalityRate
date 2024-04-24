#include <iostream>
#include "MortalityRate.h"
#include "CovidVirus.h"
#include "HivVirus.h"
#include "BirdFlu.h"

using namespace std;

int main() {
	int choice;
	do {
		cout << "Choose disease to get the mortality rate\n\t1. Covid Virus\n\t2. HIV Virus\n\t3. Bird Flu\n\t4. Quit" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			CovidVirus c;
			cout << "MortalityRate = " << c.GetMortalityRate() << endl << endl;
			break;
		}
		case 2:
		{
			HivVirus h;
			cout << "MortalityRate = " << h.GetMortalityRate() << endl << endl;
			break;
		}
		case 3:
		{
			BirdFlu b;
			cout << "MortalityRate = " << b.GetMortalityRate() << endl << endl;
			break;
		}
		case 4:
			cout << "Goodbye";
			break;
		default:
			cout << "Invalid selection!\nTry again!!" << endl << endl;
			break;
		}
	} while (choice != 4);
}

