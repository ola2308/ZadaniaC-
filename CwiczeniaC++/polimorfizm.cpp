#include "polimorfizm.h"

void Kolo1::oblicz_pole() {
	cout << "Pole kola: " << 3.14 * r * r << endl;
}

Kolo1::Kolo1(float x) : r(x) {};

void Kwadrat::oblicz_pole() {
	cout << "Pole kwadratu: " << a * a << endl;
}

Kwadrat::Kwadrat(float x) : a(x) {};

void obliczenia(Ksztalt* x) {
	x->oblicz_pole();
}

//Oblicz pole nie trzeba ju¿ zmieniac niezaleznie jakie ksztalty chcemy miec albo mamy to mozemy obliczyc pole.