#include"Zad1_1-1_27.h"
#include "Zad1_28-1_40.h"
#include "zad_2_1-2_20.h"
#include"cpp0x.h"
#include"ulamek.h"
#include"polimorfizm.h"
#include "strumienie.h"
#include "szablony.h"
#include"PlikiBinarne.h"
#include <thread>
#include <exception>
#include <thread>
#include <mutex>
#include <chrono>
#include "Dane.h"

using namespace std;

	namespace Gra {
		class Postac {
		public:
			void przedstaw() const { cout << "Jestem postacią z gry!" << endl; }
		};

		// Funkcja w przestrzeni nazw Gra
		void pokaz(const Postac& p) {
			cout << "Prezentacja postaci w grze:" << endl;
			p.przedstaw();
		}
	}

	//Klasa bazowa CRTP
	template <typename T>
	class Postac {
	public:
		void atak() {
			static_cast<T*>(this)->atak();  //rzutuje wskaźnik this na typ klasy pochodnej
		}
		//this wskazuje na adres obiektu klasy pochodnej 
	};

	class Wojownik : public Postac<Wojownik> {
	public:
		void atak() { cout << "Wojownik uderza mieczem!" << endl; }
	};

	class Mag : public Postac<Mag> {
	public:
		void atak() { cout << "Mag rzuca zaklecie!" << endl; }
	};
	class Licznik {
	private:
		mutable mutex mtx;//`mutable` umożliwia modyfikację mutexa w metodzie `const`
		int licznik = 0;// Licznik chroniony przez mutex
		int suma = 0;// Dodatkowa zmienna do pokazania `unique_lock`

	public:
		//Metoda używająca `lock_guard` — prostsze, automatyczne blokowanie
		void zwiekszLockGuard(int wartosc) {
			lock_guard<mutex> lock(mtx);  //Automatyczne zablokowanie mutexa
			licznik += wartosc;
			cout << "[LockGuard] Licznik po zwiększeniu: " << licznik << endl;
		}

		//Metoda używająca `unique_lock` — elastyczne blokowanie mutexa
		void zwiekszUniqueLock(int wartosc) {
			unique_lock<mutex> lock(mtx); //Elastyczne blokowanie mutexa
			suma += wartosc;
			cout << "[UniqueLock] Suma po zwiększeniu: " << suma << endl;

			lock.unlock();  //`unique_lock` umożliwia wcześniejsze odblokowanie
			cout << "[UniqueLock] Mutex odblokowany przed końcem funkcji!" << endl;
		}

		//Metoda `const` z `mutable` — pozwala na modyfikację `licznik` mimo `const`
		void pokazLicznik() const {
			lock_guard<mutex> lock(mtx);  //`mutable` pozwala na blokowanie mutexa w `const`
			cout << "[Mutable] Aktualny licznik: " << licznik << endl;
		}
	};
int main() {
	//unsigned a, b, c;
	//char d;
	//float f, g;
	//cout << "Podaj trzy liczby dodatnie : " << endl;
	//cin >> a >> b >> c;
	//zad1_1(a, b, c);
	//zad1_2(a);
	//zad1_3(a);
	//cout << "Podaj znak: " << endl;
	//cin >> d;
	//zad1_4(d);
	//cout << "Podaj dwie liczby: " << endl;
	//cin >> f >> g;
	//zad1_5(float(a), float(b), float(c), f, g);
	//zad1_6(); cout<<zad1_7()<<endl; zad1_8(); zad1_9(); zad1_10(); zad1_11(); zad1_12(); zad1_13(); zad1_14(); zad1_15(); zad1_16(); zad1_17();zad1_18();zad1_19(); zad1_20(); zad1_23(); zad1_24(); zad1_25();zad1_26(); zad1_27(); zad1_32_33();
	//zad1_36();
	/*vector<string>imie = {"Aleksandra", "Jakub", "Zbigniew", "Antoni","Halina"};
	while (!imie.empty()) {
		cout << imie.back() << " : " << endl;
		zad2_1(imie.back());
		imie.pop_back();
	}*/
	//cout << "5 jest " << (zad2_11(5) ? "parzysta" : "nieparzysta") << endl;
	/*cout << "Podaj liczby: " << endl;
	cin >> a >> b;
	cout << "liczba to: " << zad2_12(a, b) << endl;
	cout << "Podaj znak: " << endl;
	cin >> d;
	zad2_13(d); zad2_20('#'); */

	/*wskazniki:
	int tab[10] = {0, 9, 1, 3, 8, 2, 6, 7, 5, 4};
	sortuj(tab, tab + 10);
	wypisz(tab, 10);

	std::cout << '\n';

	int tab2[16] = { 9, 7, 8, 6, 5, 4, 4, 0, 9, 6, 7, 1, 6, 3, 1, -100 };
	sortuj(tab2, tab2 + 15);
	wypisz(tab2, 15);
	*/
	/*
	int zmienna = 213;
	int *wskaznik = &zmienna;

	//Wyświetlanie adresu wskaźnika
	cout << "zmienna=" << zmienna << endl;
	cout << "wskaznik=" << wskaznik << endl;
	//Wyświetlanie danych, na które wskazuje adres wskaźnika
	cout << "Adres zmienna=" << &zmienna << endl;
	cout << "wskaznik=" << *wskaznik<<endl;
	//Modyfikacja danych, na które wskazuje wskaźnik
	cout << "zmienna=" << zmienna << endl;
	*wskaznik = 50;
	cout << "zmienna=" << zmienna << endl;
	*/
	//wskazniki1();
	/*Klasa a, b;
	a.m(b);
	b.m(b);*/
	/*Punkt p1(3, 2);
	Punkt p2(1, 2);

	if (p1.porownaj(p2)) {
		std::cout << "p1 i p2 to ten sam punkt" << endl;
	}
	else cout << "p1 i p2 to dwa rozne punkty" << endl;*/
	/*Prostokat prostokat(1, 2);
	cout << "Pole: " << prostokat.pole() << endl;
	cout << "Obwod: " << prostokat.obwod() << endl;*/

	//newIDelete();
	//Ulamek u1;
	//u1.wczytaj();
	//Przycisk p1("ok", 25, 100);
	//p1.wyswietlInformacje();

	/*
	Punkt1 p1("cos", 2, 3);
	Prostokat1 pr1("nazwaaaaPr", 1, 2, 3, 4);

	sedzia(p1, pr1);

	Punkt2 p2("dokola", 2, 3);

	Kolo k1("nazwaKola", "nazwaPunktu",2,3,4);

	k1.wyswietl();

	Kolo1 k(1);

	Kwadrat kw(2);

	Ksztalt* wsk;
	wsk = &k;
	wsk->oblicz_pole();

	wsk = &kw;
	wsk->oblicz_pole();

	obliczenia(wsk);
	wczytywanieZPliku();

	string imie;
	cout << "Podaj imie: " << endl;
	cin >> imie;

	int dlugosc = imie.length(); //ostatnia literka ma indeks o jeden mniejszy niż długość stringa
	if (imie[dlugosc - 1] == 'a') {
		cout << "Jestes chyba kobieta." << endl;
	}
	else cout << "Chyba mezczyzna." << endl;

	for (int i = dlugosc - 1;i >= 0;i--) {
		cout << imie[i];
	}
	string jeden = "Ala ma ";
	string dwa = "kota";
	string trzy = jeden + dwa;
	cout << trzy << endl;

	//na duze litery
	transform(trzy.begin(), trzy.end(), trzy.begin(), ::toupper);
	cout << trzy << endl;

	transform(trzy.begin(), trzy.end(), trzy.begin(), ::tolower);
	cout << trzy << endl;
	string napis = "Ala ma kota";
	string szukaj = "kot";
	size_t pozycja = napis.find(szukaj);
	out << pozycja << endl;
	

	Pudelko<int> p(42);
	p.wyswietl();
	
	string nazwa = "pliczekBinaren.bin";
	string nazwa1 = "pliczekTekstowy.txt";
	double liczba = 2345.5;
	Zapis(nazwa, liczba);
	Odczyt(nazwa);
	//Zapis2(nazwa1, liczba);
	//Odczyt2(nazwa1);

	Licznik licznik;

	// Tworzenie wątków z różnymi metodami synchronizacji
	thread t1(&Licznik::zwiekszLockGuard, &licznik, 5);
	thread t2(&Licznik::zwiekszUniqueLock, &licznik, 10);
	// Pokazanie wartości w wątku głównym
	thread t3(&Licznik::pokazLicznik, &licznik);

	t1.join();
	t2.join();
	t3.join();

	Wojownik woj;
	Mag mag;

	woj.atak();  //"Wojownik uderza mieczem!"
	mag.atak();  //"Mag rzuca zaklęcie!"
	*/

	Dane osoba("Jan Kowalski");
	osoba.pokaz();

	Gra::Postac bohater;
	pokaz(bohater);  //ADL automatycznie znajduje `Gra::pokaz()`

	return 0;
}





