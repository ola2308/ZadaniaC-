#include "zad_2_1-2_20.h"

/* int wylosowana_liczba = (std::rand() % ile_liczb_w_przedziale) + startowa_liczba;
*max_element(v1.begin(), v1.end()) //zwraca iterator, *pobiera warto�� z iteratora
erase(remove(v1.begin(), v1.end(), max), v1.end()) //remove przesuwa elementy na pocz�tek, zwraca iterator do maxa, erase po iteratorze usuwa maxa

*/


/*zadanie2.1 Wy�wietl swoje imi� w p�tli tyle razy, ile jest w tym imieniu samog�osek (uwzgl�dnij sze�� samog�osek, to jest "eyuioa"). */
void zad2_1(string imie) {
	string samogloski = "aeiouyAEIOUY";
	int licznik = 0;
	for (auto literka : imie) {
		if (samogloski.find(literka) != string::npos)licznik++;//npos sta�a, oznaczaj�ca nie znaleziono albo koniec stringa
	}
	while (licznik--) cout << imie << endl;
}
/* zadanie 2.2 Wylosuj trzy liczby i umie�� je w wektorze.
Utw�rz funkcj�, kt�ra znajduje najwi�ksz� liczb� w przekazanym do niej wektorze i zwraca j�, a z wektora usuwa.
Je�eli liczba ta wyst�pi�a w wektorze wiele razy, usu� tylko jedn�, dowoln�.
Wy�wietl sum� pozosta�ych liczb tyle razy, ile wynosi�a ta maksymalna liczba.
Na przyk�ad dla 1, 2, 3 wy�wietl trzy razy sum� 1+2.*/
int zad2_2() {
	vector<int>v1;
	srand(time(NULL));
	for (int i = 0;i < 3;i++) {
		v1.push_back((rand()%20)+10);
		cout << "wylosowana: "<<v1[i] << endl;
	}
	int max = *max_element(v1.begin(), v1.end());
	v1.erase(remove(v1.begin(), v1.end(), max), v1.end());

	for (int i = 0;i < max;i++) {
		cout << "suma: " << v1[0] + v1[1] << endl;
	}

	return max;
}
/*zadanie 2.3 Losuj w p�tli dowoln� angielsk� liter� ma�� lub du�� tak d�ugo, a� zostanie wylosowana ma�a litera 'z' lub du�a 'A'.
Podaj liczb� losowa� po zako�czeniu dzia�ania p�tli.
Wylosowane litery umieszczaj w napisie.
Poka� tak uzyskany napis.*/

void zad2_3() {
	srand(time(NULL));
	string napis = " ";
	int licznik = 0;
	char wylosowana;

	do {
		int losowe = rand() % 52;
		wylosowana = (losowe < 26) ? ('A' + losowe) : ('a' + losowe - 26);
		napis += wylosowana;
		licznik++;
	} while (wylosowana != 'z' && wylosowana != 'A');

	cout << "Napis: " << napis << endl;
	cout << "Liczba losowa�: " << licznik << endl;
}

void zad2_3_2() {
	srand(time(NULL));
	string litery = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
	char znak;
	string napis;
	int licznik = 0;
	do {
		znak = litery[rand() % litery.size()];
		napis += znak;
		licznik++;
	} while (znak != 'z' && znak != 'A');

	cout << "Napis: " << napis << endl;
	cout << "Liczba losowa�: " << licznik << endl;
}

/*zadanie 2.4 Wygeneruj dwadzie�cia losowych liczb ca�kowitych od 0 do 20.
Za ka�dym razem, gdy wylosujesz tak� liczb�, umieszczaj j� w wektorze na losowej pozycji.
Nie mo�esz jednak nadpisa� istniej�cych ju� w wektorze warto�ci.
Poka� zawarto�� wektora, gdy osi�gnie wielko�� dwudziestu liczb. */
void zad2_4() {
	srand(time(NULL));
	vector<int>v1;

	for (int i = 0;i < 20;i++) {
		v1.insert(v1.begin() + (rand() % (i + 1)), (rand() % 21));
	}
	for (auto e : v1) {
		cout << e << endl;
	}
}
/*zadanie 2.5 Wy�wietlaj losowe liczby ca�kowite od 0 do 100 tak d�ugo, a� wypadnie 100.
Wy�wietl informacj�, ile losowa� nast�pi�o, zanim przerwa�a si� p�tla przy warto�ci 100.*/
void zad2_5() {
	srand(time(NULL));
	int licznik = 0;
	int liczby;

	do {
		liczby = rand() % 101;
		cout << liczby << endl;
		licznik++;
	} while (liczby != 100);

	cout << "Liczba liczb: " << licznik << endl;

}
/*zadanie 2.6 Wype�nij dziesi�cioelementow� tablic�/wektor losowymi liczbami ca�kowitymi z zakresu od -10 do 10.
Ile jest liczb ujemnych w tak wylosowanej tablicy, ile liczb dodatnich, ile parzystych, a ile nieparzystych? */

void zad2_6() {
	const int size = 10;
	int array[size];
	int dodatnie = 0;
	int ujemne = 0;
	int parzyste = 0;
	int nieparzyste = 0;
	for (int i = 0;i < size;i++) {
		array[i] = rand() % 21 - 10;
	}
	for (auto e : array) {
		cout << e << endl;
		if (e < 0) {
			ujemne++;
		}
		else if (e > 0) {
			dodatnie++;
		}
		if (e % 2 == 0) parzyste++;
		else if (e % 2 != 0)nieparzyste++;
	}
	cout << "Parzyste: " << parzyste << endl;
	cout << "Nieparzyste: " << nieparzyste << endl;
	cout << "Ujemne: " << ujemne << endl;
	cout << "Dodatnie: " << dodatnie << endl;
}

/*zadanie 2.7Wylosuj dwadzie�cia liczb z zakresu od 0 do 1000 ka�da i wy�wietl trzy najwi�ksze z nich. */
void zad2_7() {
	vector<int>v1;

	for (int i = 0;i < 20;i++) {
		v1.push_back(rand() % 1001);
	}
	for (int i = 0;i < 3;i++) {
		int max = *max_element(v1.begin(), v1.end());
		cout << "max: " << max << endl;
		v1.erase(remove(v1.begin(), v1.end(), max), v1.end());
	}
}

/*zadanie 2.8 Wylosuj i wy�wietl liczb� u�amkow� (typ double) w zakresie od 0 do 1 w��cznie z maksymalnie trzema miejscami po przecinku. Skorzystaj z funkcji rand().*/
void zad2_8() {
	srand(time(NULL));
	double liczba = static_cast<double>(rand() % 1001) / 1000.0;
	cout << fixed << setprecision(3) << liczba << endl;
}
/*zadanie 2.9 Utw�rz tablic�/wektor dwudziestu losowych liczb typu double z zakresu od -1 do 1 i przeka� do trzech miejsc po przecinku.
Oblicz �redni� wszystkich liczb. */
void zad2_9() {
	srand(time(NULL));
	vector<double>v1;
	double suma = 0;
	for (int i = 0;i < 20;i++) {
		v1.push_back(((rand() % 2002) - 1000) / 1000.0);
		cout << v1[i] << endl;
	}
	for (auto e : v1) {
		suma += e;
	}

	cout << "srednia: " << fixed << setprecision(3) << suma / 20 << endl;
}

/*zadanie 2.10 Wylosuj liczb� ca�kowit� L mi�dzy 20 a 30 w��cznie oraz pobierz z klawiatury liczb� Z.
Wy�wietl L-krotnie znak Z*/
void zad2_10() {
	srand(time(NULL));
	int L = rand()%11+20;
	int Z;
	cout << "wylosowana liczba: " << L << endl;
	cout << "Podaj liczbe: " << endl;
	cin >> Z;
	L--;
	while (L--) {
		cout << Z << endl;
	}
}
/*zadanie 2.11 Wykorzystaj operator bitowy &, aby sprawdza�, czy liczba nieujemna jest parzysta.
Utw�rz funkcj� sprawdzaj�c� w ten spos�b parzysto�� i zwracaj�c� true/false (parzysta/nieparzysta). */
bool zad2_11(int liczba) {
	return !(liczba & 1);
}

/*zadanie 2.12 Pobierz z klawiatury dwie liczby ca�kowite a i b.
Utw�rz funkcj� zwracaj�c� liczb� double, gdzie a to cz�� ca�kowita, a warto�� bezwzgl�dna z b to cz�� u�amkowa zwracanej liczby.
Na przyk�ad dla 45 i -11 zwr�� 45.11. */
double zad2_12(int a, int b) {
	return (a + abs(b / 100.0));
}

/*zadanie 2.13 Pobierz znak z z klawiatury, a nast�pnie wylosuj dwie liczby ca�kowite a i b w zakresie od 5 do 10 ka�da.
Utw�rz funkcj�, kt�ra otrzyma te warto�ci jako argumenty i narysuje a wierszy, w kt�rych b�dzie b znak�w (znak pobrany z klawiatury na pocz�tku).
Na przyk�ad dla znaku # i liczb 3 i 8 narysuj trzy wiersze w ka�dym po osiem znak�w #. */

void zad2_13(char znak) {
	srand(time(NULL));
	int a = rand() % 6 + 5;
	int b = rand() % 6 + 5;
	cout << "a: " << a << " b: " << b << endl;
	for (int i = 0;i < a;i++) {
		for (int j = 0;j < b;j++) {
			cout << znak;
		}
		cout << "\n";
	}
}

/*zadanie 2.14 Utw�rz p�tl�, kt�ra losuje liczb� z zakresu od 1 do 1000 w��cznie, ale po ka�dym kroku zmienia zakres losowania od ostatnio wylosowanej liczby do 1000 w��cznie.
P�tla przerywa si�, gdy wylosujesz 1000.
Przyk�adowo, pierwsze losowanie jest z zakresu <1;1000> i np. wypada 200.
Zatem drugie losowanie jest z zakresu <200;1000> i np. wypada 254.
Zatem trzecie losowanie ma ju� zakres <254;1000> itd.
Wylosowane liczby maj� by� zwracane w wektorze przez funkcj�. */
void zad2_14() {
	srand(time(NULL));
	vector<int>v1;
	int liczba=1;
	while (liczba != 1000) {
		liczba = rand() % (1001 - liczba) + liczba;
		v1.push_back(liczba);
	}
	for (auto e: v1) {
		cout << e << endl;
	}
}

/*zadanie 2.15 Wype�nij wektor losowymi liczbami ca�kowitymi, nast�pnie wszystkie liczby parzyste wyzeruj, a nieparzystym zmie� znak, po czym wy�wietl ten wektor od ty�u (od elementu ostatniego do pierwszego).
Ilo�� liczb w wektorze ma by� r�wnie� losowa: od 10 do 100 w��cznie, a same liczby � dowolne. */
void zad2_15() {
	srand(time(NULL));
	vector<int>v1;
	int ileliczb = rand() % 91 + 10;
	cout << "ILosc liczb: " << ileliczb;
	for (int i = 0;i < ileliczb;i++) {
		v1.push_back(rand());
	}
	cout << "Wektor poczatkowy: " << endl;
	for (auto e : v1) {
		cout << e << " ";
	}
	cout << "Rozmiar wektora: " << v1.size() << endl;
	for (int i = 0;i < v1.size();i++) {
		if (v1[i] % 2 == 0) {
			v1[i] = 0;
		}
		else v1[i] = -v1[i];
	}
	cout << "Normalna kolejnosc: " << endl;
	for (auto e : v1) {
		cout << e << " ";
	}
	cout << endl;
	cout << "Odwrocona kolejnosc " << endl;
	for (int i = v1.size()-1;i >= 0;i--) {
		cout << v1[i] << " ";
	}
}

/*zadanie 2.16 Pobierz lub wylosuj liczb� ca�kowit� n z zakresu <5;12>.
Nast�pnie dla tego n narysuj �kwadrat� z�o�ony ze znak�w #, kt�ry ma n wierszy i n kolumn (czyli n znak�w w wierszu).
Na przyk�ad dla n=5
#####
#####
#####
#####
#####
Zr�b z tego funkcj� rysuj�c� dla podanej liczby i znaku. */

void zad2_16() {
	srand(time(NULL));
	int n = rand() % 8 + 5;
	cout << n << endl;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cout << "#";
		}
		cout << "\n";
	}
}

/*zadanie 2.17 Dla losowego ca�kowitego n z zakresu <5;12> narysuj szachownic� ze znaku # oraz spacji ' '.
Na przyk�ad dla n=5
# # #
 # #
# # #
 # #
# # #*/
void zad2_17() {
	srand(time(NULL));
	int n = rand() % 8 + 5;
	cout << n << endl;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if ((i + j) % 2 == 0) {
				cout << "#";
			}
			else cout << " ";
		}
		cout << "\n";
	}
}

/*zadanie 2.18 Dla losowego ca�kowitego n z zakresu <5;12> narysuj �kwadrat� sk�adaj�cy si� z n wierszy i n kolumn, kt�rego kraw�d� to znak #, a wn�trze jest puste (spacje).
Na przyk�ad: 
#####
#   #
#   #
#   #
#####*/
void zad2_18() {
	srand(time(NULL));
	int n = rand() % 8 + 5;
	cout << n << endl;
	for (int i = 0;i < n;i++) {
		if (i == 0 || i == n - 1) {
			for (int j = 0;j < n;j++)
				cout << "#";
		}
		else {
			for (int j = 0;j < n;j++) {
				if (j == 0 || j == n - 1) {
					cout << "#";
				}
				else cout << " ";
			}
		}
		cout << "\n";
	}
}


/*zadanie 2.19 Dla losowego ca�kowitego n z zakresu <5;12> narysuj �tr�jk�t prostok�tny�.
Przyk�adowo, dla n=5 ma to wygl�da� tak:
#
##
###
####
#####
W ostatnim wierszu ma by� pi�� (og�lnie n) znak�w #, a w pierwszym � jeden znak #.
Nast�pnie narysuj podobny tr�jk�t, ale tak, by najd�u�szy bok nie by� z lewej, ale z prawej strony.
*/

void zad2_19() {
	srand(time(NULL));
	int n = rand() % 8 + 5;
	cout << n << endl;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j <=i;j++) {
			cout << "#";
		}
		cout << "\n";
	}
	for (int i = 0;i < n;i++) {
		for (int j = 0; j < n - i - 1;j++) {
			cout << " ";
		}
		for (int j = 0; j <= i;j++){
			cout<<"#";
		}
		cout << "\n";
	}
}


/* zadanie 2.20 Wylosuj nieparzyst� liczb� ca�kowit� n z zakresu <7;21> (je�li b�dzie parzyste, losuj ponownie).
Nast�pnie narysuj �piramid�, w kt�rej w pierwszym wierszu jest jeden znak #, a w drugim s� trzy znaki #.
W ostatnim wierszu ma by� n znak�w #.

Piramida ma by� symetryczna, czyli �rodkowy znak # w ka�dej linii ma by� w tej samej pionowej linii/kolumnie.
Na przyk�ad dla n=5:
  #
 ###
#####
Nast�pnie narysuj �diament�, czyli pocz�tkowo to samo, ale po osi�gni�ciu najd�u�szej (ostatniej) linii znak�w # rysuj odbicie lustrzane, traktuj�c t� ostatni� lini� jak o� symetrii.
Efektem ma by� figura jak w przyk�adzie ni�ej dla n=7:
   #
  ###
 #####
#######
 #####
  ###
   #
Zadbaj o to, aby obie figury rysowa�a funkcja otrzymuj�ca jako argumenty znak i n.
*/

void zad2_20(char znak) {
	int n;
	do {
		n = rand() % 15 + 7;
	} while (n % 2 != 0);
	//g�ra
	for (int i = 1; i <= n; i += 2) {
		for (int j = 0; j < (n - i) / 2; j++) {
			cout << " ";
		}
		for (int j = 0; j < i; j++) {
			cout << znak;
		}
		cout << endl;
	}
	//d�
	for (int i = n - 2; i >= 0; i -= 2) {
		for (int j = 0; j < (n - i) / 2;j++) {
			cout << " ";
		}
		for (int j = 0; j <= i;j++) {
			cout << znak;
		}
		cout << endl;
	}

}
