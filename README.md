# Bank

W projekcie Bank_0 przewidziałem dwa sposoby rozwiązania  zadania.

1. Otwarcie konta wraz z debetem:

W klasie Rachunek dodałem nową zmienną prywatną double debet oraz zmodyfikowałem  konstruktor Rachunek dodając nowy parametr double debet.
W klasie Konto zmodyfikowałem konstruktor dodając do niego nowy parametr double debet z domyślną wartością 0 aby tworząc konto bez debetu nie było go, w przeciwnym wypadku będzie to wartość debetu.
W klasie Bank dodałem nową metodę OtworzZdebetem(), dzięki której mogę utworzyć konto z debetem.


2. Otwarcie konta zwykłego, z późniejszym dodaniem debetu:

W klasie Rachunek dodałem nową metodę DodajDebet(double debet).
W klasie Konto dodałem metodę DodajDebet(int id, double debet).
W klasie Bank dodałem metodę 
	DodajDebet(NUMER_RACHUNKU numer, int id, double debet).



	Wprowadzone przeze mnie zmiany nie wpływają w negatywny sposób na pierwotne działanie programu (przed dokonaniem zmian).
