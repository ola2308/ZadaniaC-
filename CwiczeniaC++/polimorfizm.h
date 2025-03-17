#include<iostream>

using namespace std;


class Ksztalt {
public:
	virtual void oblicz_pole() = 0;//metoda czysto wirtualna
};

class Kolo1 :public Ksztalt
{
	float r;
public:
	Kolo1(float = 1);
	virtual void oblicz_pole();
};

class Kwadrat : public Ksztalt {
	float a;
public:
	Kwadrat(float=1);
	virtual void oblicz_pole();
};

void obliczenia(Ksztalt* x);