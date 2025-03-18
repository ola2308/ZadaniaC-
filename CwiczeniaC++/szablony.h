#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Pudelko {
    T zawartosc;

public:
    Pudelko(T zawartosc) : zawartosc(zawartosc) {}  // Konstruktor inline
    void wyswietl() const {                         // Implementacja inline
        cout << "Zawartosc: " << zawartosc << endl;
    }
};
