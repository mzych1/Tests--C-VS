#pragma once
class Kalkulator {
private:
	int value;
public:
	Kalkulator() {
		value = 0;
	}
	Kalkulator(int x) {
		value = x;
	}
	void dodaj(int);
	void odejmij(int);
	void pomnoz(int);
	void podziel(int);
	int getValue();
};