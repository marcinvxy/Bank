#include "Konto.h"

Konto::Konto(string klient, string haslo, NUMER_RACHUNKU numer, double debet = 0)
{
	this->klient = klient;
	this->haslo = haslo;
	this->rachunek = Rachunek(numer, debet);
}

int Konto::Login(string klient, string haslo, int id)
{
	if (this->klient == klient && this->haslo == haslo)
	{
		this->id = id;
		return this->id;
	}
	return this->id;
}


bool Konto::DodajDebet(int id, double debet) {
	if (this->id == id && this->id != LOGIN_NIEMOZLIWY)
	{
		return this->rachunek.DodajDebet(debet);
	}
	return false;
}

bool Konto::Logout(int id)
{
	if (this->id == id && this->id != LOGIN_NIEMOZLIWY)
	{
		this->id = LOGIN_NIEMOZLIWY;
		return true;
	}
	return false;
}

bool Konto::Wplata(int id, double kwota)
{
	return this->rachunek.Wplata(kwota);
}

bool Konto::Wyplata(int id, double kwota)
{
	if (this->id == id && this->id != LOGIN_NIEMOZLIWY)
	{
		return this->rachunek.Wyplata(kwota);
	}
	return false;
}

double Konto::Stan(int id)
{
	if (this->id == id && this->id != LOGIN_NIEMOZLIWY)
	{
		return this->rachunek.Stan();
	}
	return 0;
}

bool Konto::Numer(NUMER_RACHUNKU numer)
{
	return this->rachunek.Numer() == numer;
}

bool Konto::Klient(string klient)
{
	return this->klient == klient;
}