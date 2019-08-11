// HelloWorld.cpp : Ten plik zawiera funkcjê „main”. W nim rozpoczyna siê i koñczy wykonywanie programu.
//

#include <iostream>
#include <stdexcept>
#include "Kalkulator.h"

using namespace std;

int main()
{
	Kalkulator kalk(4);
	cout << kalk.getValue() << endl;
	kalk.dodaj(9);
	cout << kalk.getValue() << endl;
	try {
		kalk.podziel(0);
	}
	catch (invalid_argument& exc) {
		cout << exc.what() << endl;
	}
	cout << kalk.getValue() << endl;
}