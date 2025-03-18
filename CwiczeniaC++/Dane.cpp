#include "Dane.h"
#include <iostream>
using namespace std;

//Definicja klasy `Impl` (pe³na implementacja)
class Dane::Impl {
public:
    string nazwa;         //Pole przechowywane w ukrytej klasie
    int wiek;             //Mo¿esz dodaæ dowolne pola bez zmieniania `Dane.h`

    Impl(const string& nazwa) : nazwa(nazwa), wiek(0) {}

    void pokaz() const {
        cout << "Nazwa: " << nazwa << ", Wiek: " << wiek << endl;
    }
};

//Implementacja konstruktora/destruktora
Dane::Dane(const string& nazwa) : pImpl(make_unique<Impl>(nazwa)) {}

Dane::~Dane() = default;

void Dane::pokaz() const {
    pImpl->pokaz();   //Delegacja wywo³ania na ukryt¹ klasê `Impl`
}
