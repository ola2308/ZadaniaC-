#pragma once
#include<iostream>
#include <conio.h>
#include<ctime>
#include<stack>

using namespace std;
void sortuj(int* begin, int* end);
void wypisz(int* begin, int size);
void wskazniki1();
class Klasa {
public: void m(Klasa& x);
};
class Punkt {
private:
	int x,y;
public:
	//Konstruktor:
	Punkt(int x, int y);

	bool porownaj(const Punkt& innyPunkt) const;
};

class Prostokat {
private:
	int x, y;
public:
	//Konstruktor
	Prostokat(int x, int y);

	int pole() const;
	int obwod() const;
};
void newIDelete();