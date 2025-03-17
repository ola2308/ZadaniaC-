#include "ulamek.h"

Przycisk::Przycisk(string n, int s, int w)
	: napis(n), szerokosc(s), wysokosc(w)
{
	if (napis.empty() || szerokosc <= 0 || wysokosc <= 0) {
		cout << "Error" << endl;
	}
}
void  Przycisk::wyswietlInformacje() {
	if (!napis.empty() && szerokosc > 0 && wysokosc > 0) {
		cout << "Przycisk: " << napis << ", szerokosc: " << szerokosc
			<< ", wysokosc: " << wysokosc << endl;
	}
}
void Ulamek::wczytaj() {
	cout << "Podaj licznik: " << endl;
	cin >> licznik;
	cout << "Podaj mianownik: " << endl;
	cin >> mianownik;
	if (mianownik == 0) {
		while (mianownik == 0) {
			cout << "Pamietaj cholero nie dziel przez zero!";
			cin >> mianownik;
		}
	}
}

Punkt1::Punkt1(string n, float xx, float yy) {
	nazwa = n;
	x = xx;
	y = yy;
}

void Punkt1::wczytaj() {
	float xx;
	float yy;
	cout << "Podaj: " << endl;
	cin >> xx >> yy;
	x = xx;
	y = yy;
}

Prostokat1::Prostokat1(string n, float xx, float yy, float w, float s) {
	nazwa = n;
	x = xx;
	y = yy;
	wysokosc = w;
	szerokosc = s;
}

void sedzia(Punkt1 pkt, Prostokat1 p) {
	if ((pkt.x >= p.x) && (pkt.x <= p.x + p.szerokosc) &&
		(pkt.y >= p.y) && (pkt.y <= p.y + p.wysokosc)) {
		cout << "No w sumie tak" << endl;
	}
	else {
		cout << "Nie gadaj pisz" << endl;
	}
}

Punkt2::Punkt2(string n, float xx, float yy) :nazwa(n), x(xx), y(yy) {};

void Punkt2::wyswietl() {
	cout << "Nazwa: " << nazwa << endl;
	cout << x << " " << y << endl;
}

void Kolo::wyswietl() {
	cout << "Kolo o nazwie: " << nazwa << endl;
	cout << "Srodek kola: " << endl;
	Punkt2::wyswietl();
	cout << "Promien: " << r << endl;
	cout << "Pole kola: " << 3.14 * r * r << endl;
}

Kolo::Kolo(string nk, string np, float a, float b, float pr) : Punkt2(np, a, b) {
	nazwa = nk;
	r = pr;
}
