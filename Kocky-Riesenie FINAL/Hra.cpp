#include "Hra.h"

void Hra::pridajHracovAkocky()
{
	this->hraci.push_back(Hrac("Milan"));
	this->hraci.push_back(Hrac("Peter"));
	this->hraci.push_back(Hrac("Stefan"));
	this->hraci.push_back(Hrac("Magda"));

	this->kocky.push_back(Kocka("BIELA", 1));
	this->kocky.push_back(Kocka("MODRA", 2));
	this->kocky.push_back(Kocka("HNEDA", 3));
	this->kocky.push_back(Kocka("ZLATA", 4));
	

}

Hrac Hra::porovnajKocky(Hrac hrac1, Hrac hrac2)
{
	if (hrac1.getHodeneCislo() == hrac2.getHodeneCislo()) {
		if (hrac1.dajKocku().getPriorita() > hrac2.dajKocku().getPriorita()) {
			return hrac1;
		}
		else {
			return hrac2;
		}
	}
	else {
		if (hrac1.getHodeneCislo() > hrac2.getHodeneCislo()) {
			return hrac1;
		}
		else {
			return hrac2;
		}
	}
}

void Hra::hrajHru()
{
	cout << this->hraci[0].getMeno() << "    " << this->hraci[1].getMeno() << "    " << this->hraci[2].getMeno() << "    " << this->hraci[3].getMeno() << " " << endl;
	for (int i = 0; i < 10; i++) {
		random_shuffle(this->kocky.begin(), this->kocky.end());
		int c = 0;
		for (int j = 0; j < 4; j++) {
			this->hraci[j].priradKocku(this->kocky[c]);
			this->hraci[j].hodKockou();
			cout << hraci[j].getHodeneCislo() << " " << hraci[j].dajKocku().getFarba() << ", ";
			c++;
		}
		Hrac vyhra = this->porovnajKocky(this->porovnajKocky(this->hraci[0], this->hraci[1]), this->porovnajKocky(this->hraci[2], this->hraci[3]));
		cout << " ||| " << vyhra.getMeno() << " " << vyhra.getHodeneCislo() << " " << vyhra.dajKocku().getFarba();
		for (int l = 0; l < 4; l++) {
			if (vyhra.dajKocku().getPriorita() == this->hraci[l].dajKocku().getPriorita()) {
				this->hraci[l].pridajVyhru();
			}
		}
		cout << endl;
	}
	cout << endl << "VYSLEDOK: " << endl;
	for (int i = 0; i < 4; i++) {
		cout << this->hraci[i].getMeno() << " " << this->hraci[i].getPocetVyhier() << endl;
	}

}
