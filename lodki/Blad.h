#pragma once
#include <string>
#include <iostream>
using namespace std;
class Blad
{
public:
	string komunikat;
	Blad(string u_komunikat) { komunikat = u_komunikat; };
	~Blad() {};
	string opis_bledu() { cout << komunikat << endl; };
	friend ostream& operator<<(ostream& os, Blad& blad);
};



