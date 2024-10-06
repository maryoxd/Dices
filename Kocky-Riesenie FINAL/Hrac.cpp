#include "Hrac.h"
#include <random>



Hrac::Hrac(string meno)
{
    this->Meno = meno;
    this->kocka = Kocka("ZIADNA", 0);
    this->pocetVyhier = 0;
}

string Hrac::getMeno()
{
    return this->Meno;
}

int Hrac::getPocetVyhier()
{
    return this->pocetVyhier;
}

void Hrac::pridajVyhru()
{
    this->pocetVyhier++;
}

void Hrac::priradKocku(Kocka kocka)
{
    this->kocka = kocka;
}

Kocka Hrac::dajKocku()
{
    return this->kocka;
}
void Hrac::hodKockou()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(0, 6);
    int hodeneCisloK = distribution(gen);
    this->hodeneCislo = hodeneCisloK;
}

int Hrac::getHodeneCislo()
{
    return this->hodeneCislo;
}
