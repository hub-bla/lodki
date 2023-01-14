#pragma once
#include <string>
#include <fstream>

using namespace std;


class Lodka
{

public:
	virtual void pokaz_dane() = 0;
	virtual ostream& zapisz_dane(ostream& os)=0;
	string model;
	int rok_produkcji;
	int ilosc_osob;
	float dlugosc;
	float szerokosc;
	float minimalne_zanurzenie;
	float maksymalne_zanurzenie;

};

