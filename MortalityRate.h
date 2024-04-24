#pragma once
#include<iostream>
using namespace std;

class MortalityRate
{
public:
	float cases, death;
	MortalityRate() {
		cout << "Enter no. of people affected" << endl;
		cin >> cases;
	
		cout << "Enter no. of people died" << endl;
		cin >> death;
	}
	virtual float GetMortalityRate() = 0;
	virtual ~MortalityRate() {}

};

