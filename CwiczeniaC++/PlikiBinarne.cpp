#include "PlikiBinarne.h"

void Zapis(string nazwa, double liczba) {
	fstream plik;
	plik.open(nazwa, ios::out | ios::binary);

	if (plik.is_open()) {
		plik.write((const char*)&liczba, sizeof liczba); //rzutowanie
		plik.close();
	}else {
		cout << "Nie udalo sie odczytac pliku" << endl;
	}
}
void Odczyt(string nazwa) {
	fstream plik;
	plik.open(nazwa, ios::in | ios::binary);
	double liczba = 0;
	if (plik.is_open()) {
		plik.read((char*)&liczba, sizeof liczba);
		plik.close();
	}else {
		cout << "Otwarcie pliku nie udalo siê" << endl;
	}
	cout << "Liczba: " << liczba<<endl;
}

//teraz taki sam nie binarny dla testu:
void Zapis2(string nazwa, int liczba) {
	fstream plik;
	plik.open(nazwa, ios::out);
	if (plik.is_open()) {
		plik<<liczba<<endl;
		plik.close();
	}
	else {
		cout << "Otwarcie pliku sie nie udalo" << endl;
	}
}

void Odczyt2(string nazwa) {
	fstream plik;
	int liczba;
	plik.open(nazwa, ios::in);
	if (plik.is_open()) {
		string linia;
		while (getline(plik, linia)) {
			liczba = stoi(linia);
		}
		plik.close();
	}else cout << "Otwarcie pliku sie nie udalo" << endl;
	cout << "Liczba tekstowa: " << liczba << endl;
}