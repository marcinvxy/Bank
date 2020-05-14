#include <iostream>
#include "Siec.h"
#define MBANK "11402004"
#define ING "10501272"

int main()
{
	Siec* siec = new Siec();
	siec->Rejestruj(MBANK, "0000000000000000");
	siec->Rejestruj(ING, "0000000000000000");

	Bank* mbank = siec->Znajdz(MBANK);
	Bank* ing = siec->Znajdz(ING);

	// Sposób 1:	aby skorzystać z tego sposobu trzeba zakomentować Sposób 2

	NUMER_RACHUNKU klientA = mbank->OtworzZdebetem("klientA", "hasloA", 100);
	NUMER_RACHUNKU klientB = ing->Otworz("klientB", "hasloB");
	int klientASession = mbank->Login("klientA", "hasloA", klientA);
	int klientBSession = ing->Login("klientB", "hasloB", klientB);
	mbank->Wplac(klientA, klientASession, 100.00);
	mbank->Przelej(klientA, klientASession, 200.00, ing, klientB);
	ing->Wyplac(klientB, klientBSession, 10.00);
	std::cout << "Stan konta A: " << mbank->Stan(klientA, klientASession) << "\n";
	std::cout << "Stan konta B: " << ing->Stan(klientB, klientBSession) << "\n";

	//Sposób 2:		aby skorzystać z tego sposobu trzeba zakomentować Sposób 1

	/*NUMER_RACHUNKU klientA = mbank->Otworz("klientA", "hasloA");
	NUMER_RACHUNKU klientB = ing->Otworz("klientB", "hasloB");
	int klientASession = mbank->Login("klientA", "hasloA", klientA);
	int klientBSession = ing->Login("klientB", "hasloB", klientB);
	mbank->Wplac(klientA, klientASession, 100.00);
	mbank->DodajDebet(klientA, klientASession, 100.00);
	mbank->Przelej(klientA, klientASession, 200.00, ing, klientB);
	ing->Wyplac(klientB, klientBSession, 10.00);
	std::cout << "Stan konta A: " << mbank->Stan(klientA, klientASession) << "\n";
	std::cout << "Stan konta B: " << ing->Stan(klientB, klientBSession) << "\n";*/
}