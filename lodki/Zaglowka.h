#pragma once
#include "Lodka.h"
#include <iostream>
#include <vector>
using namespace std;
class Zaglowka : public Lodka
{
public:
	float powierzchnia_zagli;
	int ilosc_zagli;
	Zaglowka();
	Zaglowka(vector<string> v);
	ostream& zapisz_dane(ostream& os);
	~Zaglowka() {};
	void pokaz_dane();
};