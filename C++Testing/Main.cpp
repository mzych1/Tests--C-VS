// HelloWorld.cpp : Ten plik zawiera funkcj� �main�. W nim rozpoczyna si� i ko�czy wykonywanie programu.
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