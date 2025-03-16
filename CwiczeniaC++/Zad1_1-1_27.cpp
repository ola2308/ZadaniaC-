#include"Zad1_1-1_27.h"
/*
wektory:
vector<int> v1; - deklaracja wektora przechowującego liczby całkowite
v1.size() - zwraca ilość elementów w wektorze
v1.push_back(a) - dodaje element a na koniec wektora
v1.insert(v1.begin(), a) - dodaje element a na początek wektora
v1.pop_back() - usuwa ostatni element z wektora
v1.erase(v1.begin()) - usuwa pierwszy element z wektora
v1.erase(v1.begin() + 2) - usuwa trzeci element z wektora
v1.clear() - usuwa wszystkie elementy z wektora
v1.empty() - zwraca true, jeżeli wektor jest pusty
v1.front() - zwraca pierwszy element wektora
v1.back() - zwraca ostatni element wektora
v1.at(2) - zwraca trzeci element wektora
v1[2] - zwraca trzeci element wektora
v1.begin() - iterator na pierwszy element wektora
v1.end() - iterator na element za ostatnim elementem wektora
v1.insert(v1.begin() + 2, a) - wstawia element a na trzecie miejsce wektora
find(start, koniec, szukana wartosc)
*/

/*zadanie 1.1 Pobierz z klawiatury trzy nieujemne liczby całkowite. Znajdź największą z nich. Wyświetl sumę pozostałych liczb tyle razy, ile wynosi wartość największej liczby.*/
int zad1_1(unsigned a, unsigned b, unsigned c) {
	//unsigned zamienia liczby ujemne na liczby dodatnie!
	int suma = 0;
	int max = a;
	if (b >= max) max = b;
	if (c >= max) max = c;
	suma = a + b + c - max;
	int absmax = abs(max);
	for (int i = 0; i < absmax; i++) {
		cout << "Suma: " << suma << endl;
	}
	return suma;
}

/*zadanie1.2 Pobraną z klawiatury liczbę całkowitą zweryfikuj pod kątem parzystości. Wyświetl tak lub nie, gdy jest lub nie jest parzysta.*/
void zad1_2(int a) {
	if (a % 2 == 0) cout << "Tak" << endl;
	else cout << "Nie" << endl;
}

/*zadanie 1.3 Pobierz liczbę całkowitą z klawiatury i sprawdź, czy jest podzielna:
przez 3 i przez 5;
przez 3, ale nie przez 5;
przez 5, ale nie przez 3;
ani przez 3, ani przez 5.
Właściwą odpowiedź wyświetl na ekranie.*/

void zad1_3(int a) {
	if (a % 3 == 0 && a % 5 == 0) cout << "FizzBuzz" << endl;
	else if (a % 3 == 0 && a % 5 != 0) cout << "Fizz" << endl;
	else if (a % 5 == 0 && a % 3 != 0) cout << "Buzz" << endl;
	else cout << "Nie podzielna ani przez 3 ani przez 5" << endl;

}

/*zadanie 1.4 Pobierz znak (char) z klawiatury. Sprawdź, czy to samogłoska, spółgłoska, czy cyfra. Poinformuj o tym, jaki to znak. Uwzględnij tylko małe litery alfabetu angielskiego i cyfry.*/

void zad1_4(char a) {
	if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') cout << "Samogłoska" << endl;
	else if (a >= 'a' && a <= 'z') cout << "Spółgłoska" << endl;
	else if (a >= '0' && a <= '9') cout << "Cyfra" << endl;
	else cout << "Niepoprawny znak" << endl;
}

/*zadanie 1.5 Masz takie wyrażenie: (((a1 + a2) * a3) - a4) / a5
(elementy od a1 do a5 są typu float).
Pobierz z klawiatury każdą ze zmiennych a1 do a5, oblicz wartość wyrażenia i wyświetl wynik. [1]
Zaprojektuj program tak, aby w przypadku dzielenia przez zero informował o tym i nie wykonywał działania.*/
void zad1_5(float a, float b, float c, float d, float e) {
	if (e == 0) cout << "Pamiętaj cholero nie dziel przez zero" << endl;
	else cout << "Wynik" << (((a + b) * c) - d) / e << endl;
}

/*zadanie 1.6 Pobierz pięć liczb z klawiatury i wyświetl informacje, ile spośród nich było parzystych, a ile nieparzystych.*/

void zad1_6() {
	int a;
	int parzyste = 0;
	for (int i = 0; i < 5; i++) {
		cout << "Podaj liczbę: " << endl;
		cin >> a;
		if (a % 2 == 0) parzyste++;
	}
	cout << "Parzyste: " << parzyste << "\nNieparzyste" << 5 - parzyste << "\n" << endl;
}

/*zadanie 1.7 Pobieraj znaki z klawiatury aż do wprowadzenia znaku 'x'. Ile znaków pobrano?*/
int zad1_7() {
	char a;
	int licznik = 0;
	cout << "Podaj ciąg znakow, aż do wprowadzenia znaku 'x'." << endl;
	cin >> a;
	while (a != 'x') {
		cin >> a;
		licznik++;
	}
	return licznik;
}
/*zadanie 1.8 Pobierz z klawiatury dwie liczby (float) i znak działania (jeden z tych: *, +, -, /).
W zależności od znaku wykonaj na pobranych dwóch liczbach odpowiednie działanie i poinformuj o wyniku. Zwróć uwagę na dzielenie przez 0!
Przykład:
Dla pobranej liczby 3 i 9.5 oraz znaku + zwróć sumę 12.5.
Sprawdź też operację przy zamianie liczb miejscami.
Jeżeli wynik różni się od wcześniejszego, wyświetl oba wyniki.
Jeżeli jest taki sam, wyświetl go tylko jeden raz.
Na przykład:
Dla liczb 5 i 2 oraz znaku / (dzielenie) trzeba wyświetlić 5/2 i 2/5, ponieważ dają różny wynik.*/
int zad1_8() {
	float a, b;
	char c;
	cout << "Podaj liczby i znak działania: " << endl;
	cin >> a >> b >> c;
	if (c == '+') cout << a + b << endl;
	else if (c == '-')  cout << a - b << " odwrotnie: " << b - a << endl;
	else if (c == '*') cout << a * b << endl;
	else if (c == '/') {
		if (b != 0 && a != 0) cout << a / b << " odwrotnie " << b / a << endl;
		else if (a != 0) cout << b / a << endl;
		else if (b != 0) cout << a / b << endl;
		else cout << "Nie dziel przez zero cholero" << endl;
	}
	else cout << "Niepoprawny znak" << endl;
	return 0;

}

/*zadanie 1.9 Pobierz liczbę całkowitą z klawiatury i wykonaj na niej poniższe operacje:
Jeżeli liczba była ujemna, zmniejsz ją o 1;
Jeżeli liczba była dodatnia, zwiększ ją o 1;
Jeżeli była zerem, pozostaw bez zmian.
Następnie określ parzystość liczby po zmianach i wyświetl informację na ten temat (tak/nie).*/

int zad1_9() {
	int a;
	cout << "Podaj liczbę: " << endl;
	cin >> a;
	if (a < 0) a--;
	else if (a > 0) a++;
	else a;
	if (a % 2 == 0) cout << "Tak" << endl;
	else cout << "Nie" << endl;
	return 0;
}

/*zadanie 1.10 Wyświetl liczby całkowite od 1 do 100. Spróbuj zrobić to, wykorzystując różne pętle (for, while, do...while).*/
void zad1_10() {
	for (int i = 0;i <= 100;++i) {
		cout << i << endl;
	}
	int j = 0;
	while (j < 100) {
		j++;
		cout << j << endl;
	}
	int k = 0;
	do {
		cout << k << endl;
		k++;
	} while (k <= 100);
}
/*zadanie 1.11 Wyświetl liczby całkowite od 100 do 10 włącznie, pomijając podzielne przez 7.*/
void zad1_11() {
	for (int i = 100;i >= 10;i--) {
		if (i % 7 != 0) cout << i << endl;
	}
}
/*zadanie 1.12 Wyświetl liczby całkowite od -25 do 25 z pominięciem 0.*/
void zad1_12() {
	for (int i = -25; i <= 25;i++) {
		if (i != 0) cout << i << endl;
	}
}
/*zadanie 1.13 Wyświetl liczby całkowite od 1 do 120 włącznie, z pominięciem liczb podzielnych równocześnie przez 11 i 5.
Wyświetl informację, ile liczb się wyświetliło, a ile zostało pominiętych. */
void zad1_13() {
	int licznik = 0;
	int pominiete = 0;
	for (int i = 1;i <= 120;i++) {
		if (i % 55 == 0) {
			pominiete++;
		}
		else {
			cout << i << endl;
			licznik++;
		}
	}
	cout << "Pominięte: " << pominiete << endl;
	cout << "Wyswietlone: " << licznik << endl;
}

/*zadanie 1.14 Odgadnij wzór ciągu, a następnie wyświetl jego sto elementów.
Początek ciągu: 3, 1, 2, 1, 3, 1, 2, 1, … [1]*/
void zad1_14() {
	vector<int>cykl = { 3,1,2,1 };
	size_t elementy = 1;
	while (elementy <= 100) {
		cout << cykl[(elementy++ - 1) % 4] << " ";
	}
}

/* zadanie 1.15 Odgadnij wzór ciągu, a następnie wyświetl jego sto elementów.
Początek ciągu: 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, … */
void zad1_15() {
	for (int i = 1; i < 100;i++) {
		for (int j = 1; j <= i; j++) {
			cout << i << endl;
		}
	}
}

/*zadanie 1.16 Odgadnij wzór ciągu, a następnie wyświetl jego sto elementów.
Początek ciągu: 100, 99, 97, 94, 90, 85, … */
void zad1_16() {
	int temp = 100;
	for (int i = 1; i <= 50;i++) {
		cout << temp << " ";
		temp -= i;
		if (temp < 0) break;
	}
}

/* zadanie 1.17 Odgadnij wzór ciągu, a następnie wyświetl jego sto elementów.
Początek ciągu: 6, 2, 8, 3, 10, 4, 12, 5, 14, 6, …*/
void zad1_17() {
	int temp1 = 6;
	int temp2 = 2;
	for (int i = 0;i < 20;i++) {
		cout << temp1 << " " << temp2 << " ";
		temp1 += 2;
		temp2++;
	}
}

/*zadanie 1.18 Pobieraj liczbę z klawiatury i wyświetlaj jej dwukrotność.
Operację powtarzaj dopóki nie zostanie wpisana wartość pomiędzy 1 a 10 włącznie.*/
void zad1_18() {
	int a;
	do {
		cout << "Podaj liczbę: " << endl;
		cin >> a;
		cout << "Dwukrotnosc: " << a * 2 << endl;
	} while (a < 1 || a>10);
}

/*zadanie 1.19 Wyświetl wszystkie liczby podzielne przez 6 ze zbioru od 0 do 1000 włącznie. */
void zad1_19() {
	for (int i = 0;i <= 1000;i++) {
		if (i % 6 == 0) cout << i << endl;
	}
}

/*zadanie 1.20 Utwórz wektor i wstaw do niego dziesięć dowolnych liczb.
Utwórz drugi wektor, który na początku zawiera liczby parzyste z pierwszego wektora, a potem pozostałe.
Wyświetl oba wektory. */
void zad1_20() {
	vector<int>v1 = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int>v2;
	for (int i = 0; i < v1.size(); i++) {
		if (v1[i] % 2 == 0) v2.push_back(v1[i]);
	}
	for (int j = 0; j < v1.size(); j++) {
		if (v1[j] % 2 != 0) v2.push_back(v1[j]);
	}
	cout << "V2: ";
	for (int i = 0;i < v2.size();i++) {
		cout << v2[i] << " ";
	}
}
/*zadanie 1.21 Pobierz pięć liczb z klawiatury. Jeżeli tworzą ciąg rosnący (zgodnie z kolejnością pobierania), poinformuj o tym.*/
void zad1_21() {
	vector<int>v1;
	int a;
	int licznik = 0;
	for (int i = 0; i < 5; i++) {
		cout << "Podaj liczbę: " << endl;
		cin >> a;
		v1.push_back(a);
	}
	for (int i = 0;i < v1.size() - 1;i++) {
		if (v1[i] < v1[i + 1]) licznik++;
	}
	if (licznik == 4) cout << "Ciag rosnacy" << endl;
	else cout << "Ciag nie jest rosnacy" << endl;
}

/*zadanie 1.22 Pobieraj liczby z klawiatury i wkładaj je do tablicy/wektora.
Pobieranie ma się zakończyć, gdy zostanie wprowadzona dwa razy z rzędu taka sama liczba */
void zad1_22() {
	vector<int>v1;
	int a;
	while (true) {
		cout << "Podaj liczbę: " << endl;
		cin >> a;
		v1.push_back(a);
		if (v1.size() > 1) {
			if (v1[v1.size() - 1] == v1[v1.size() - 2]) break;
		}
	}
}

/*zadanie 1.23 Pobieraj liczby z klawiatury i wkładaj je do wektora pod warunkiem, że taka liczba jeszcze w wektorze nie istnieje.
Jeżeli istnieje, zignoruj ją i pobieraj dalej.
Pobieranie zakończy się, gdy wektor będzie zawierał dziesięć liczb. */
void zad1_23() {
	vector<int>v1;
	int a;
	int licznik;
	for (int i = 0;v1.size() <= 10;i++) {
		licznik = 0;
		cout << "Podaj liczbę: " << endl;
		cin >> a;
		for (int i = 0;i < v1.size();i++) {
			if (v1[i] == a) licznik++;
		}
		if (licznik == 0) v1.push_back(a);
	}
	cout << "Wektor: ";
	for (int i = 0; i < v1.size();i++) {
		cout << v1[i] << " ";
	}
}


/*zadanie 1.24 Pobieraj z klawiatury znaki (bez polskich ogonków i bez dużych liter) i wprowadzaj je do wektora według zasady:

Samogłoski zawsze na początku wektora,
Spółgłoski zawsze na końcu wektora.
Jeżeli pojawi się znak * lub #, nie wstawiaj ich, ale usuń z wektora pierwszy znak (dla *) lub ostatni (dla #), o ile jest co usuwać.
Zakończ pętlę pobierania i wstawiania, gdy wprowadzone będzie !. */

void zad1_24() {
	vector<char>v1;
	char a;
	while (true) {
		cout << "Podaj znak: " << endl;
		cin >> a;
		if (a == '!') break;
		else if (a == '*') {
			if (!v1.empty()) v1.erase(v1.begin());
		}
		else if (a == '#') {
			if (!v1.empty()) v1.pop_back(); //usuwa ostatni element
		}
		else if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
			v1.insert(v1.begin(), a);
		}
		else {
			v1.push_back(a);
		}
	}
	cout << "Wektor1: " << endl;
	for (int i = 0;i < v1.size(); i++) {
		cout << v1[i] << " ";
	}
}

/*zadanie 1.25 Pobieraj w pętli liczby z klawiatury. Wkładaj je do wektora v.
Wnętrze pętli to następujące kroki:
Pobierz liczbę i wprowadź ją na koniec wektora.
Pobierz liczbę i wprowadź ją na koniec wektora (tak, takie same numery kroków).
Jeżeli iloczyn dwóch ostatnich liczb z wektora nie przekracza 1000, wprowadź również ten iloczyn do wektora i wróć do punktu 1.
Jeżeli iloczyn przekroczył wartość 1000, zakończ pętlę. */

void zad1_25() {
	vector<int>v1;
	int a;
	int b;
	while (true) {
		cout << "Podaj dwie liczby: " << endl;
		cin >> a >> b;
		v1.push_back(a);
		v1.push_back(b);
		if (a * b < 1000) v1.push_back(a * b);
		else break;
	}
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}
}


/* zadanie 1.26 Utwórz wektor zawierający następujące cyfry:
v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}
Wykonaj następujące polecenia:
Znajdź w wektorze i wyświetl wszystkie podciągi trójelementowe (trzy kolejne liczby z wektora), które tworzą ciągi niemalejące. [1]
Znajdź jeden najdłuższy podciąg niemalejący. [3]
Policz liczbę wystąpień każdej liczby w wektorze. [2]
*/
void zad1_26() {
	int licznik = 1;
	int temp = 0;
	int wystapienia = 0;
	int pierwszy = 0;
	int ostatni = 0;
	vector<int>v1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	for (int i = 0; i < v1.size() - 2;i++) {
		if (v1[i] <= v1[i + 1] && v1[i + 1] <= v1[i + 2]) cout << "Podciąg: " << v1[i] << " " << v1[i + 1] << " " << v1[i + 2] << endl;;
	}
	for (int j = 0; j < v1.size() - 1; j++) {
		if (v1[j] <= v1[j + 1]) {
			licznik++;
			if (licznik > temp) {
				temp = licznik;
				ostatni = j + 1;
				pierwszy = ostatni - temp + 1;
			}
		}
		else if (v1[j] > v1[j + 1]) {
			licznik = 0;
		}
	}
	cout << "Najdluzszy podciag niemalejacy: " << temp << endl;
	for (int j = pierwszy;j <= ostatni;j++) {
		cout << v1[j] << " ";
	}
	map<int, int>mapa;
	for (int num : v1) {
		mapa[num]++;
	}
	cout << "Liczba wystapien kazdej liczby : " << endl;
	for (const auto& pair : mapa) {
		cout << pair.first << " wystapila " << pair.second << "razy " << endl;
	}
}

/*zadanie 1.27 Utwórz trzy wektory z następującą zawartością:
v1 = {1, 3, 5, 7, 9}
v2 = {1, 4, 7, 11, 15}
v3 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 20}
Potraktuj je jak zbiory, w których każdy element może wystąpić tylko jeden raz.
Przykładowo, po dodaniu do zbioru v1 liczby 5, zbiór nie uległby zmianie, gdyż 5 już tam jest.
Dla podanych wektorów/zbiorów wyświetl:
a) Część wspólną zbiorów: v1 ∩ v2 [1]
b) Różnicę zbioru v3 i sumy zbiorów v1 + v2: v3 - (v1 ∪ v2) [4]
c) Sumę wszystkich zbiorów v1, v2 i v3: v1 ∪ v2 ∪ v3 [2]*/

void zad1_27() {
	vector<int>v1 = { 1, 3, 5, 7, 9 };
	vector<int>v2 = { 1, 4, 7, 11, 15 };
	vector<int>v3 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 20 };
	vector<int>wspolna;
	vector<int>suma;
	vector<int>roznica; //{2,6,8,20}
	vector<int>sumaWszystkich;
	for (int i = 0;i < v1.size();i++) {
		for (int j = 0; j < v2.size();j++) {
			if (v1[i] == v2[j]) wspolna.push_back(v1[i]);
		}
	}
	for (int i = 0;i < wspolna.size();i++) {
		cout << wspolna[i] << " ";
	}
	for (int i = 0;i < v1.size(); i++) {
		suma.push_back(v1[i]);
	}
	for (int i = 0; i < v2.size();i++) {
		if (find(suma.begin(), suma.end(), v2[i]) == suma.end()) {
			suma.push_back(v2[i]);
		}
	}
	roznica = v3;
	for (auto it = roznica.begin(); it != roznica.end(); ) {
		if (find(suma.begin(), suma.end(), *it) != suma.end()) {//iterator to pointer, * referencja, inaczej by porównywało wartość iteratora z wartością
			it = roznica.erase(it);
		}
		else {
			++it;
		}
	}

	cout << "Roznica" << endl;
	for (int i : roznica) cout << i << " ";

	sumaWszystkich = v1;
	for (int i = 0; i < v2.size();i++) {
		if (find(sumaWszystkich.begin(), sumaWszystkich.end(), v2[i]) == sumaWszystkich.end()) {
			sumaWszystkich.push_back(v2[i]);
		}
	}
	for (int i = 0;i < v3.size();i++) {
		if (find(sumaWszystkich.begin(), sumaWszystkich.end(), v3[i]) == sumaWszystkich.end()) {
			sumaWszystkich.push_back(v3[i]);
		}
	}
	cout << "Suma wszystkich" << endl;
	for (int i : sumaWszystkich) {
		cout << i << " ";
	}
}