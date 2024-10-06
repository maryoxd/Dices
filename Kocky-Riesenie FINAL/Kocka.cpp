#include "Kocka.h"

Kocka::Kocka(string farba, int priorita)
{
	this->Farba = farba;
	this->Priorita = priorita;
}

Kocka::Kocka()
{
}

string Kocka::getFarba()
{
	return this->Farba;
}

int Kocka::getPriorita()
{
	return this->Priorita;
}
