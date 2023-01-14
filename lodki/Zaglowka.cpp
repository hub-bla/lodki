#include "Zaglowka.h"

Zaglowka::Zaglowka(vector<string> v) {
	model = v[1];
	rok_produkcji = stoi(v[2]);
	ilosc_osob = stoi(v[3]);
	dlugosc = stof(v[4]);
	szerokosc = stof(v[5]);
	minimalne_zanurzenie = stof(v[6]);
	maksymalne_zanurzenie = stof(v[7]);
	ilosc_zagli = stoi(v[8]);
	powierzchnia_zagli = stof(v[9]);
}
Zaglowka::Zaglowka() {
	system("CLS");
	cout << "==================DODAWANIE ZAGLOWKI==========================" << endl << endl;

	string u_model;
	int u_rok_produkcji;
	int u_ilosc_osob;
	float u_dlugosc;
	float u_szerokosc;
	float u_minimalne_zanurzenie;
	float u_maksymalnie_zanurzenie;
	float u_powierzchnia_zagli;
	int u_ilosc_zagli;

	cout << "Podaj model: ";
	getline(cin, u_model);
	getline(cin, u_model);


	cout << "Podaj rok produkcji: ";
	cin >> u_rok_produkcji;

	cout << "Podaj ilosc osob: ";
	cin >> u_ilosc_osob;

	cout << "Podaj dlugosc: ";
	cin >> u_dlugosc;

	cout << "Podaj szerokosc: ";
	cin >> u_szerokosc;

	cout << "Podaj minimalne zanurzenie: ";
	cin >> u_minimalne_zanurzenie;

	cout << "Podaj maksymalne zanurzenie: ";
	cin >> u_maksymalnie_zanurzenie;

	cout << "Podaj ilosc zagli: ";
	cin >> u_ilosc_zagli;

	cout << "Podaj powierzchnie zagli: ";
	cin >> u_powierzchnia_zagli;

	model = u_model;
	rok_produkcji = u_rok_produkcji;
	ilosc_osob = u_ilosc_osob;
	dlugosc = u_dlugosc;
	szerokosc = u_szerokosc;
	minimalne_zanurzenie = u_minimalne_zanurzenie;
	maksymalne_zanurzenie = u_maksymalnie_zanurzenie;
	powierzchnia_zagli = u_powierzchnia_zagli;
	ilosc_zagli = u_ilosc_zagli;

}


void Zaglowka::pokaz_dane() {
	cout << "Typ: Zaglowka"<< endl;
	cout << "Model: " << model << endl;
	cout << "Rok produkcji: " << rok_produkcji << endl;
	cout << "Ilosc osob: " << ilosc_osob << endl;
	cout << "Dlugosc: " << dlugosc << endl;
	cout << "Szerokosc: " << szerokosc << endl;
	cout << "Minimalne zanurzenie: " << minimalne_zanurzenie << endl;
	cout << "Maksymalne zanurzenie: " << maksymalne_zanurzenie << endl;
	cout << "Powierzchnia zagli: " << powierzchnia_zagli << endl;
	cout << "Ilosc zagli: " << ilosc_zagli << endl;
}


ostream& Zaglowka::zapisz_dane(ostream& os) {
	os << "z" << ',' << model << ',' << rok_produkcji << ',' << ilosc_osob << ',';
	os << dlugosc << ',' << szerokosc << ',' << minimalne_zanurzenie << ',' << maksymalne_zanurzenie << ',';
	os << ilosc_zagli << ',' << powierzchnia_zagli << endl;

	return os;
}