#include "zad_2_1-2_20.h"

/* int wylosowana_liczba = (std::rand() % ile_liczb_w_przedziale) + startowa_liczba;
*max_element(v1.begin(), v1.end()) //zwraca iterator, *pobiera wartoœæ z iteratora
erase(remove(v1.begin(), v1.end(), max), v1.end()) //remove przesuwa elementy na pocz¹tek, zwraca iterator do maxa, erase po iteratorze usuwa maxa

*/


/*zadanie2.1 Wyœwietl swoje imiê w pêtli tyle razy, ile jest w tym imieniu samog³osek (uwzglêdnij szeœæ samog³osek, to jest "eyuioa"). */
void zad2_1(string imie) {
	string samogloski = "aeiouyAEIOUY";
	int licznik = 0;
	for (auto literka : imie) {
		if (samogloski.find(literka) != string::npos)licznik++;//npos sta³a, oznaczaj¹ca nie znaleziono albo koniec stringa
	}
	while (licznik--) cout << imie << endl;
}
/* zadanie 2.2 Wylosuj trzy liczby i umieœæ je w wektorze.
Utwórz funkcjê, która znajduje najwiêksz¹ liczbê w przekazanym do niej wektorze i zwraca j¹, a z wektora usuwa.
Je¿eli liczba ta wyst¹pi³a w wektorze wiele razy, usuñ tylko jedn¹, dowoln¹.
Wyœwietl sumê pozosta³ych liczb tyle razy, ile wynosi³a ta maksymalna liczba.
Na przyk³ad dla 1, 2, 3 wyœwietl trzy razy sumê 1+2.*/
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
/*zadanie 2.3 Losuj w pêtli dowoln¹ angielsk¹ literê ma³¹ lub du¿¹ tak d³ugo, a¿ zostanie wylosowana ma³a litera 'z' lub du¿a 'A'.
Podaj liczbê losowañ po zakoñczeniu dzia³ania pêtli.
Wylosowane litery umieszczaj w napisie.
Poka¿ tak uzyskany napis.*/

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
	cout << "Liczba losowañ: " << licznik << endl;
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
	cout << "Liczba losowañ: " << licznik << endl;
}

/*zadanie 2.4 Wygeneruj dwadzieœcia losowych liczb ca³kowitych od 0 do 20.
Za ka¿dym razem, gdy wylosujesz tak¹ liczbê, umieszczaj j¹ w wektorze na losowej pozycji.
Nie mo¿esz jednak nadpisaæ istniej¹cych ju¿ w wektorze wartoœci.
Poka¿ zawartoœæ wektora, gdy osi¹gnie wielkoœæ dwudziestu liczb. */
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
/*zadanie 2.5 Wyœwietlaj losowe liczby ca³kowite od 0 do 100 tak d³ugo, a¿ wypadnie 100.
Wyœwietl informacjê, ile losowañ nast¹pi³o, zanim przerwa³a siê pêtla przy wartoœci 100.*/
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
/*zadanie 2.6 Wype³nij dziesiêcioelementow¹ tablicê/wektor losowymi liczbami ca³kowitymi z zakresu od -10 do 10.
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

/*zadanie 2.7Wylosuj dwadzieœcia liczb z zakresu od 0 do 1000 ka¿da i wyœwietl trzy najwiêksze z nich. */
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

/*zadanie 2.8 Wylosuj i wyœwietl liczbê u³amkow¹ (typ double) w zakresie od 0 do 1 w³¹cznie z maksymalnie trzema miejscami po przecinku. Skorzystaj z funkcji rand().*/
void zad2_8() {
	srand(time(NULL));
	double liczba = static_cast<double>(rand() % 1001) / 1000.0;
	cout << fixed << setprecision(3) << liczba << endl;
}
/*zadanie 2.9 Utwórz tablicê/wektor dwudziestu losowych liczb typu double z zakresu od -1 do 1 i przeka¿ do trzech miejsc po przecinku.
Oblicz œredni¹ wszystkich liczb. */
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

/*zadanie 2.10 Wylosuj liczbê ca³kowit¹ L miêdzy 20 a 30 w³¹cznie oraz pobierz z klawiatury liczbê Z.
Wyœwietl L-krotnie znak Z*/
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
/*zadanie 2.11 Wykorzystaj operator bitowy &, aby sprawdzaæ, czy liczba nieujemna jest parzysta.
Utwórz funkcjê sprawdzaj¹c¹ w ten sposób parzystoœæ i zwracaj¹c¹ true/false (parzysta/nieparzysta). */
bool zad2_11(int liczba) {
	return !(liczba & 1);
}

/*zadanie 2.12 Pobierz z klawiatury dwie liczby ca³kowite a i b.
Utwórz funkcjê zwracaj¹c¹ liczbê double, gdzie a to czêœæ ca³kowita, a wartoœæ bezwzglêdna z b to czêœæ u³amkowa zwracanej liczby.
Na przyk³ad dla 45 i -11 zwróæ 45.11. */
double zad2_12(int a, int b) {
	return (a + abs(b / 100.0));
}

/*zadanie 2.13 Pobierz znak z z klawiatury, a nastêpnie wylosuj dwie liczby ca³kowite a i b w zakresie od 5 do 10 ka¿da.
Utwórz funkcjê, która otrzyma te wartoœci jako argumenty i narysuje a wierszy, w których bêdzie b znaków (znak pobrany z klawiatury na pocz¹tku).
Na przyk³ad dla znaku # i liczb 3 i 8 narysuj trzy wiersze w ka¿dym po osiem znaków #. */

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

/*zadanie 2.14 Utwórz pêtlê, która losuje liczbê z zakresu od 1 do 1000 w³¹cznie, ale po ka¿dym kroku zmienia zakres losowania od ostatnio wylosowanej liczby do 1000 w³¹cznie.
Pêtla przerywa siê, gdy wylosujesz 1000.
Przyk³adowo, pierwsze losowanie jest z zakresu <1;1000> i np. wypada 200.
Zatem drugie losowanie jest z zakresu <200;1000> i np. wypada 254.
Zatem trzecie losowanie ma ju¿ zakres <254;1000> itd.
Wylosowane liczby maj¹ byæ zwracane w wektorze przez funkcjê. */
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

/*zadanie 2.15 Wype³nij wektor losowymi liczbami ca³kowitymi, nastêpnie wszystkie liczby parzyste wyzeruj, a nieparzystym zmieñ znak, po czym wyœwietl ten wektor od ty³u (od elementu ostatniego do pierwszego).
Iloœæ liczb w wektorze ma byæ równie¿ losowa: od 10 do 100 w³¹cznie, a same liczby — dowolne. */
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

/*zadanie 2.16 Pobierz lub wylosuj liczbê ca³kowit¹ n z zakresu <5;12>.
Nastêpnie dla tego n narysuj „kwadrat” z³o¿ony ze znaków #, który ma n wierszy i n kolumn (czyli n znaków w wierszu).
Na przyk³ad dla n=5
#####
#####
#####
#####
#####
Zrób z tego funkcjê rysuj¹c¹ dla podanej liczby i znaku. */

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

/*zadanie 2.17 Dla losowego ca³kowitego n z zakresu <5;12> narysuj szachownicê ze znaku # oraz spacji ' '.
Na przyk³ad dla n=5
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

/*zadanie 2.18 Dla losowego ca³kowitego n z zakresu <5;12> narysuj „kwadrat” sk³adaj¹cy siê z n wierszy i n kolumn, którego krawêdŸ to znak #, a wnêtrze jest puste (spacje).
Na przyk³ad: 
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


/*zadanie 2.19 Dla losowego ca³kowitego n z zakresu <5;12> narysuj „trójk¹t prostok¹tny”.
Przyk³adowo, dla n=5 ma to wygl¹daæ tak:
#
##
###
####
#####
W ostatnim wierszu ma byæ piêæ (ogólnie n) znaków #, a w pierwszym — jeden znak #.
Nastêpnie narysuj podobny trójk¹t, ale tak, by najd³u¿szy bok nie by³ z lewej, ale z prawej strony.
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


/* zadanie 2.20 Wylosuj nieparzyst¹ liczbê ca³kowit¹ n z zakresu <7;21> (jeœli bêdzie parzyste, losuj ponownie).
Nastêpnie narysuj „piramidê”, w której w pierwszym wierszu jest jeden znak #, a w drugim s¹ trzy znaki #.
W ostatnim wierszu ma byæ n znaków #.

Piramida ma byæ symetryczna, czyli œrodkowy znak # w ka¿dej linii ma byæ w tej samej pionowej linii/kolumnie.
Na przyk³ad dla n=5:
  #
 ###
#####
Nastêpnie narysuj „diament”, czyli pocz¹tkowo to samo, ale po osi¹gniêciu najd³u¿szej (ostatniej) linii znaków # rysuj odbicie lustrzane, traktuj¹c tê ostatni¹ liniê jak oœ symetrii.
Efektem ma byæ figura jak w przyk³adzie ni¿ej dla n=7:
   #
  ###
 #####
#######
 #####
  ###
   #
Zadbaj o to, aby obie figury rysowa³a funkcja otrzymuj¹ca jako argumenty znak i n.
*/

void zad2_20(char znak) {
	int n;
	do {
		n = rand() % 15 + 7;
	} while (n % 2 != 0);
	//góra
	for (int i = 1; i <= n; i += 2) {
		for (int j = 0; j < (n - i) / 2; j++) {
			cout << " ";
		}
		for (int j = 0; j < i; j++) {
			cout << znak;
		}
		cout << endl;
	}
	//dó³
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
