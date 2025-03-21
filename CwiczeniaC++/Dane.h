#pragma once
#include <memory>
#include <string>
using namespace std;

class Dane {
public:
    Dane(const string& nazwa);
    ~Dane();               //Destruktor jest wymagany w PIMPL
    void pokaz() const;    //Publiczna metoda dostępna dla użytkownika

private:
    class Impl;            //Forward declaration (deklaracja klasy implementacyjnej)
    unique_ptr<Impl> pImpl; //Wskaźnik na implementację
};