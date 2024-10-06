#pragma once
#include <string>
#include <iostream>

using namespace std;

class Kocka {
private:
	string Farba;
	int Priorita;
public:
	Kocka(string farba, int priorita);
	Kocka();
	string getFarba();
	int getPriorita();
};