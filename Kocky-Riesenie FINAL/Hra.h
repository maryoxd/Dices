#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <random>
#include <algorithm>
#include "Hrac.h"
#include "Kocka.h"

class Hra {
private:
	vector<Hrac> hraci;
	vector<Kocka> kocky;
public:
	void pridajHracovAkocky();
	Hrac porovnajKocky(Hrac hrac1, Hrac hrac2);
	void hrajHru();
};