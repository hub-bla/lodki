// lodki.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
#include "Lodka.h"
#include "Motorowka.h"
#include "Zaglowka.h"
#include  <stdlib.h> 
#include <sstream>
#include <cstdio>
#include "Blad.h"
using namespace std;


vector<Lodka*> wczytaj_dane();
vector<string> split(const string& s, char delim);

ostream& operator<<(ostream& os, Blad& blad)
{
	os << blad.komunikat;

	return os;
}


int main()
{
	while (true) {
		try {

	Lodka* wskazniczek = NULL;
	vector<Lodka*> lodki = wczytaj_dane();
		

	system("CLS");

	cout << "==================SKLEP Z LODZIAMI==========================" << endl<<endl;

	cout << "1. Dodaj Motorowke \n\n";
	cout << "2. Dodaj Zaglowke \n\n";
	cout << "3. Wczytaj Ogloszenia \n\n";
	cout << "4. Usun Ogloszenie \n\n";
	cout << "Wybierz opcje: ";

	int opcja;
	cin >> opcja;

	if (opcja > 4) {
		Blad* bladzik = new Blad("Nie znaleziono takiej opcji");
		throw bladzik;
	}

	if (opcja == 1) {

		Lodka* motorowka = new Motorowka();
		lodki.push_back(motorowka);
	}
	else if (opcja == 2) {
		Lodka* zaglowka = new Zaglowka();
		lodki.push_back(zaglowka);
	}
	else if (opcja == 3) {
		system("CLS");

		cout << "==================OGLOSZENIA==========================" << endl << endl;
		for (int i = 0; i < lodki.size(); i++) {
			lodki[i]->pokaz_dane();
			cout << endl;
		}

		string powrot;
		cout << "Aby powrocic do menu wpisz cos: ";
		cin >> powrot;
	
		
	}
	else if (opcja == 4) {
		string nazwa;
		int size_before = lodki.size();
		cout << "Podaj nazwe modelu: ";
		getline(cin, nazwa);
		getline(cin, nazwa);
		cout << endl;
		for (int i = 0; i < lodki.size(); i++) {
			if (lodki[i]->model == nazwa) {
				lodki.erase(lodki.begin() + i);
				break;
			}
		}
		if (size_before > lodki.size()) {
			cout << "Usunieto ogloszenie" << endl<< endl;
		}
		else {
			cout << "Nie znaleziono ogloszenia" << endl<< endl;
		}
		string powrot;
		cout << "Aby powrocic do menu wpisz cos: ";
		cin >> powrot;
	}
	ofstream Plik("lodki.txt");

	// Write to the file
	for (int i=0; i < lodki.size(); i++) {
		lodki[i]->zapisz_dane(Plik);
	}

	// Close the file
	Plik.close();

	}

	catch (Blad* blad) {
		cout << *blad <<endl;
		string powrot;
		cout << "Aby powrocic do menu wpisz cos: ";
		cin >> powrot;
	}
	}
	
}



vector<string> split(const string& s, char delim) {
	vector<string> result;
	stringstream ss(s);
	string item;

	while (getline(ss, item, delim)) {
		result.push_back(item);
	}

	return result;
}

vector<Lodka*> wczytaj_dane() {
	string Dane;
	vector<Lodka*> lodki;
	//ODCZYT Z PLIKU
	ifstream MyReadFile("lodki.txt");

	while (getline(MyReadFile, Dane)) {
		vector<string> v = split(Dane, ',');
		if (v[0] == "z") {
			Lodka* zaglowka = new Zaglowka(v);
			lodki.push_back(zaglowka);
		}
		else {
			Lodka* motorowka = new Motorowka(v);
			lodki.push_back(motorowka);
		}
		cout << endl;
	}
	MyReadFile.close();
	return lodki;
}


//model = u_model;
//rok_produkcji = u_rok_produkcji;
//ilosc_osob = u_ilosc_osob;
//dlugosc = u_dlugosc;
//szerokosc = u_szerokosc;
//minimalne_zanurzenie = u_minimalne_zanurzenie;
//maksymalne_zanurzenie = u_maksymalnie_zanurzenie;
//moc_silnika = u_moc_silnika;
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
