#pragma once
#include<iostream> 
#include<string>
#include<math.h>
using namespace std;

class Prostokat1;

class Ulamek {
private:
	int licznik;
	int mianownik;

public:
	void wczytaj();
};

class Przycisk {
private:
	int szerokosc;
	int wysokosc;
	string napis;
public:
	Przycisk(string n, int s, int w);
	void wyswietlInformacje();
};


class Punkt1 {
private:
	float x, y;
	string nazwa;
public:
	Punkt1(string = "nazwaPunktu", float = 0, float = 0);
	void wczytaj();
	friend void sedzia(Punkt1 pkt, Prostokat1 p);
};

class Prostokat1 {
private:
	float x, y, szerokosc, wysokosc;
	string nazwa;
public:
	Prostokat1(string = "Prostokat", float = 0, float = 0, float = 1, float = 1);
	friend void sedzia(Punkt1 pkt, Prostokat1 p);
};

void sedzia(Punkt1 pkt, Prostokat1 p);

class Punkt2 {
	float x, y;
	string nazwa;
public:
	Punkt2(string = "s", float = 1, float = 1);
	void wyswietl();
};

class Kolo :public Punkt2 {
	float r;
	string nazwa;
public:
	void wyswietl();
	Kolo(string, string, float, float, float);
};