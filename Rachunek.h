#pragma once
#include "Definicje.h"

class Rachunek
{
private:
	NUMER_RACHUNKU numer; // numer rachunku
	double stan; // aktualny stan rachunku
	double debet;

public:
	Rachunek(); // Standardowy konstruktor bez parametrow
	Rachunek(NUMER_RACHUNKU numer, double debet);
	bool Wplata(double kwota); // Wplac kwote na rachunek
	bool Wyplata(double kwota); // Pobierz kwote z rachunku
	NUMER_RACHUNKU Numer(); // Pokaz numer rachunku
	double Stan(); // Pokaz stan rachunku
	bool DodajDebet(double debet);
};