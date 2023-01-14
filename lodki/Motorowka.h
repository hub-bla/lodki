#pragma once
#include "Lodka.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;


class Motorowka :
    public Lodka
{

public:
    int moc_silnika;
    Motorowka();
    Motorowka(vector<string> v);
    ~Motorowka() {};
    void pokaz_dane();
    ostream& zapisz_dane(ostream& os);
};

