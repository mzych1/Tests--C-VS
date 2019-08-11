#include <iostream>
#include "Kalkulator.h"

void Kalkulator::dodaj(int a) {
	value += a;
}

void Kalkulator::odejmij(int a) {
	value -= a;
}

void Kalkulator::pomnoz(int a) {
	value *= a;
}

void Kalkulator::podziel(int a) {
	if (a == 0) {
		throw std::invalid_argument("Dzielenie przez zero.");
	}
	else
		value /= a;
}

int Kalkulator::getValue() {
	return value;
}