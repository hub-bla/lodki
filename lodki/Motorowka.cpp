#include "Motorowka.h"


Motorowka::Motorowka(vector<string> v) {
	model = v[0];
	rok_produkcji = stoi(v[1]);
	ilosc_osob = stoi(v[2]);
	dlugosc = stof(v[3]);
	szerokosc = stof(v[4]);
	minimalne_zanurzenie = stof(v[5]);
	maksymalne_zanurzenie = stof(v[6]);
	moc_silnika = stoi(v[7]);
}


Motorowka::Motorowka() {
	system("CLS");

	cout << "==================DODAWANIE MOTOROWKI==========================" << endl << endl;
	string u_model;
	int u_rok_produkcji;
	int u_ilosc_osob;
	float u_dlugosc;
	float u_szerokosc;
	float u_minimalne_zanurzenie;
	float u_maksymalnie_zanurzenie;
	int u_moc_silnika;



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

	cout << "Podaj moc silnika: ";
	cin >> u_moc_silnika;
	model = u_model;
	rok_produkcji = u_rok_produkcji;
	ilosc_osob = u_ilosc_osob;
	dlugosc = u_dlugosc;
	szerokosc = u_szerokosc;
	minimalne_zanurzenie = u_minimalne_zanurzenie;
	maksymalne_zanurzenie = u_maksymalnie_zanurzenie;
	moc_silnika = u_moc_silnika;
}


void Motorowka::pokaz_dane() {
	cout << "Typ: Motorowka"<< endl;
	cout << "Model: " << model << endl;
	cout << "Rok produkcji: " << rok_produkcji << endl;
	cout << "Ilosc osob: "<<ilosc_osob << endl;
	cout << "Dlugosc: " << dlugosc << endl;
	cout << "Szerokosc: " << szerokosc << endl;
	cout << "Minimalne zanurzenie: " << minimalne_zanurzenie << endl;
	cout << "Maksymalne zanurzenie: " << maksymalne_zanurzenie << endl;
	cout << "Moc silnika: " << moc_silnika << endl;
}


ostream& Motorowka::zapisz_dane(ostream& os) {
	os << model << ',' << rok_produkcji << ',' << ilosc_osob << ',';
	os << dlugosc << ',' << szerokosc << ',' << minimalne_zanurzenie << ',' << maksymalne_zanurzenie << ',';
	os << moc_silnika << endl;

	return os;
}