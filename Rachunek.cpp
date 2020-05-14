#include "Rachunek.h"

Rachunek::Rachunek()
{
	this->numer = "";
	this->stan = 0.00;
	this->debet = 0.00;
}

Rachunek::Rachunek(NUMER_RACHUNKU numer, double debet)
{
	this->numer = numer;
	this->stan = 0.00;
	this->debet = debet;
}

bool Rachunek::Wplata(double kwota)
{
	this->stan += kwota;
	return true;
}

bool Rachunek::Wyplata(double kwota)
{
	if (this->stan - kwota >= 0 - this->debet)
	{
		this->stan -= kwota;
		return true;
	}

	return false;
}

bool Rachunek::DodajDebet(double debet) {
	return this->debet = debet;
}

NUMER_RACHUNKU Rachunek::Numer()
{
	return this->numer;
}

double Rachunek::Stan()
{
	return this->stan;
}