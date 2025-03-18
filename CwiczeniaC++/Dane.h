#pragma once
#include <memory>
#include <string>
using namespace std;

class Dane {
public:
    Dane(const string& nazwa);
    ~Dane();               //Destruktor jest wymagany w PIMPL
    void pokaz() const;    //Publiczna metoda dost�pna dla u�ytkownika

private:
    class Impl;            //Forward declaration (deklaracja klasy implementacyjnej)
    unique_ptr<Impl> pImpl; //Wska�nik na implementacj�
};