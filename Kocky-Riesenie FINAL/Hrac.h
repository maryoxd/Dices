#pragma once
#include <string>
#include <vector>
#include "Kocka.h"

using namespace std;

class Hrac {
private:
	string Meno;
	int pocetVyhier;
	Kocka kocka;
	int hodeneCislo;

public:
	Hrac(string meno);
	string getMeno();
	int getPocetVyhier();
	void pridajVyhru();
	void priradKocku(Kocka kocka);
	Kocka dajKocku();
	void hodKockou();
	int getHodeneCislo();
};