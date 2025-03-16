#include "Zad1_28-1_40.h"
/*zadanie 1.28 Pobieraj w pętli jeden znak (char). Ignoruj znaki niebędące znakami cyfr. Przerwij pętlę, gdy zbierzesz pięć znaków będących cyframi, np. '1', '4', '3', '5', '0'. 
Utwórz zmienną całkowitą, która będzie liczbą utworzoną z tych cyfr. Ma to być faktyczna zmienna, np. typu long long int. Dla podanego przykładu byłaby to liczba 14350. */
void zad1_28() {
    char a;
    int licznik = 0;
    long int liczba = 0;
    vector<int>cyfry;
    while (true) {
        cout << "Podaj cyfre: " << endl;
        cin >> a;
        if (a >= '0' && a <= '9') {
            licznik++;
            cyfry.push_back(a-'0');
        }
		if (licznik == 5) break;
    }
	cout << "Liczba: " << cyfry[0] << cyfry[1] << cyfry[2] << cyfry[3] << cyfry[4] << endl;
}

/* zadanie 1.29 Kasia postanowiła w 2022 roku zaznaczać dni, w których udało jej się pilnować diety, jak również te, w których jej się to nie udało. Dla każdego dnia roku, numerowanego od 1 do 365, 
utworzyła dla Kasi wektor vector<bool> i skopiuj do niego następujące wartości, gdzie 1 to wartość true, a 0 to wartość false (plik 29_dieta.txt).
1,0,1,0,1,0,0,0,0,0,1,1,0,1,1,0,0,1,1,0,1,1,1,0,0,1,1,0,1,0,1,1,0,1,0,0,1,1,1,1,
1,0,0,1,0,0,0,0,1,1,0,1,0,1,1,0,0,1,0,0,1,0,1,0,0,0,1,1,1,0,1,1,0,0,1,0,0,1,0,1,
0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,0,0,1,1,1,1,0,0,1,0,0,0,0,1,1,0,0,1,1,1,0,1,
0,0,1,1,1,0,1,0,1,1,1,1,1,0,0,0,0,0,1,1,0,1,0,0,1,0,0,1,1,0,0,0,1,0,0,1,0,1,1,0,
0,1,0,1,1,0,0,1,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,1,1,0,1,1,0,0,0,1,0,1,1,1,0,1,1,0,
0,1,0,0,0,1,0,0,1,1,0,0,1,0,0,0,1,0,1,1,1,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,0,1,0,
1,1,1,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,0,0,1,0,1,0,1,1,0
Każda cyfra (0 lub 1) to kolejny dzień udany (1) lub nieudany (0).
Pytania:
a) Przez ile dni w roku Kasia odnosiła sukces dietetyczny? [1]
b) Ile było okresów trwających przynajmniej pięć dni z rzędu, które stanowiły porażkę dietetyczną? Podaj numer dnia w roku rozpoczynającego każdy z okresów. [4]*/
void zad1_29() {
    vector<bool>dieta = { 1,0,1,0,1,0,0,0,0,0,1,1,0,1,1,0,0,1,1,0,1,1,1,0,0,1,1,0,1,0,1,1,0,1,0,0,1,1,1,1, 1,0,0,1,0,0,0,0,1,1,0,1,0,1,1,0,0,1,0,0,1,0,1,0,0,0,1,1,1,0,1,1,0,0,1,0,0,1,0,1, 0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,0,0,
 1,1,1,1,0,0,1,0,0,0,0,1,1,0,0,1,1,1,0,1, 0,0,1,1,1,0,1,0,1,1,1,1,1,0,0,0,0,0,1,1,0,1,0,0,1,0,0,1,1,0,0,0,1,0,0,1,0,1,1,0,
0,1,0,1,1,0,0,1,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,1,1,0,1,1,0,0,0,1,0,1,1,1,0,1,1,0,
0,1,0,0,0,1,0,0,1,1,0,0,1,0,0,0,1,0,1,1,1,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,0,1,0,
1,1,1,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0 };
    int licznikSukcesow = 0;
	int licznikNiepowodzen = 0;
    int koncowaData = 0;
    int liczbaPorazek = 0;
    vector<int>poczatkowaData;
    for (int i = 0;i < dieta.size();i++) {
		if (dieta[i] == true) licznikSukcesow++;
    }
	cout << "Sukcesy: " << licznikSukcesow << endl;
    for (int i = 0;i < dieta.size();i++){
        if (dieta[i] == false) {
            licznikNiepowodzen++;
            if (licznikNiepowodzen == 5) {
                liczbaPorazek++;
				koncowaData = i;
				poczatkowaData.push_back(koncowaData - 4);
            }
        }
        else if (dieta[i] == true){
			licznikNiepowodzen = 0;
        }
    }
	cout << "Porazki: " << liczbaPorazek << endl;
	cout << "Poczatkowa data: " << endl;
	for (int i : poczatkowaData) cout << i << " ";
}

/* zadanie 1.30 Pewien kosmiczny blob, okrążający swoją gwiazdę, postanowił zwiększyć swoją masę. Na początku blob ważył 1 kg i przez pierwsze dwa okrążenia swojej gwiazdy nie udało mu się urosnąć. 
Ale przy trzecim okrążeniu blob ważył tyle, ile wynosi suma wartości jego wagi z ostatnich dwóch okrążeń. Od tego momentu wszystko potoczyło się błyskawicznie. Kolejne okrążenia ponownie zaowocowały wagą bloba 
równą sumie wag z ostatnich dwóch okrążeń i ten schemat trwał już cały czas.
Pytanie: Ile wynosiła waga kosmicznego bloba po trzynastym okrążeniu jego macierzystej gwiazdy? Przyjmij, że dwa pierwsze okrążenia to waga 1 i 1. */
void zad1_30() {
    vector<int>waga = { 1,1 };
    for (int i = 0;i < 12;i++) {
        waga.push_back(waga[i] + waga[i + 1]);
    }
    cout << waga[12] << endl;
}

/*zadanie 1.31 Spróbuj odpowiedzieć na pytania do podanego kodu, wykorzystując tylko swoją wiedzę i nie używając kompilatora:
int a = 5;
cout << (a >> 1) << endl; //Przesunięcie bitowe w prawo o 1 tzn mamy 0101, po przesunięciu bedzie 0010 czyli 2
cout << (a << 1) << endl; //Przesunięcie bitowe w lewo o 1, mamy 0101, a będzie 1010 czyli 10
int b = 5;
cout << (b & 1) << endl; //0101 & 0001 = 0001 sprawdza bity czy się zgadzają
cout << (b | 1) << endl; // 0101 | 0001 = 0101 lub, to lub to, sprawdza czy któryś z bitów jest 1
int c = 5;
cout << (c && 1) << endl; //Oba argumenty są prawdziwe, więc zwraca 1, gdyby c=0 to by zwrocilo 0
cout << (c || 1) << endl; //Wystarczy, że jeden z argumentów jest prawdziwy, więc zwraca 1
Pytania:
a) Co się wyświetli w dwóch pierwszych instrukcjach? Wyjaśnij to.
b) Co się wyświetli po wykonaniu dwóch kolejnych instrukcji? Wyjaśnij to.
c) Która instrukcja nie jest poprawna. Potrafisz wyjaśnić dlaczego? Wszystkie instrukcje są poprawne.
d) Co jest true a co false w ostatnich dwóch instrukcjach? */

/* zadanie 1.32 Skopiuj poniższy wektor do swojego kodu lub skopiuj go z pliku 32_wektor.txt.
vector<int> x = { 1,2,1,4,9,5,4,3,5,7,6,5,8,2,3,9,8,1,0,4,8,5,3,2 };
a) Ile razy wystąpiła sytuacja, w której dwie sąsiednie liczby były identyczne? [1]
b) Ile razy wystąpiła sytuacja, w której dwie sąsiednie liczby łącznie miały wartość 10?
*/
void zad1_32_33() {
    vector<int> x = { 1,2,1,4,9,5,4,3,5,7,6,5,8,2,3,9,8,1,0,4,8,5,3,2 };
    vector<int> x1 = { 2,7,1,1,4,9,3,2,1,4,9,5,4,3,5,7,6,5,8,2,3,9,8,1,0,4,8,5,3,2 };
    int licznikIdentycznych = 0;
    int licznikIdentycznych1 = 0;
    int licznikSumy = 0;
    int licznikSumy1 = 0;
    for (int i = 0; i < x.size() - 1;i++) {
		if (x[i] == x[i + 1]) licznikIdentycznych++;
		if (x[i] + x[i + 1] == 10) licznikSumy++;
        if (x1[i] == x1[i + 1]) licznikIdentycznych1++;
        if (x1[i] + x1[i + 1] == 10) licznikSumy1++;
    }
	cout << "Identyczne: " << licznikIdentycznych << endl;
	cout << "Suma: " << licznikSumy << endl;
    cout << "Identyczne1: " << licznikIdentycznych1 << endl;
    cout << "Suma1: " << licznikSumy1 << endl;
}
/*zadanie 1.33 Skopiuj poniższy wektor do swojego kodu lub skopiuj go z pliku 33_wektor.txt.
vector<int> x = { 2,7,1,1,4,9,3,2,1,4,9,5,4,3,5,7,6,5,8,2,3,9,8,1,0,4,8,5,3,2 };
a) Ile razy wystąpiła sytuacja, w której dwie sąsiednie liczby były identyczne? [1]
b) Ile razy wystąpiła sytuacja, w której dwie sąsiednie liczby łącznie miały wartość 10?
*/

/*zadanie 1.34 Pobieraj w pętli znak (char) z klawiatury. Za każdym razem po pobraniu znaku wyświetl jego wartość całkowitą (int). 
Gdy suma tych wartości uzyskana z kolejnych znaków przekroczy 350, zakończ pętlę. Wyświetlaj również po pobraniu znaku aktualny stan sumy. [1]
Ogranicz się do małych i dużych liter angielskich oraz cyfr. Jeżeli zostanie wprowadzony inny znak, zignoruj go. */
void zad1_34() {
    char a;
	int suma = 0;
    while (true) {
        cout << "Podaj znak: " << endl;
        cin >> a;
        if (a >= 'a' && a <= 'z') {
            suma += a - 'a' + 1;
            cout << "wartosc: " << a - 'a' + 1 << endl;
        }
        else if ((a >= 'A' && a <= 'Z')) {
            suma += a - 'A' + 1;
            cout << "wartosc: " << a - 'A' + 1 << endl;
		}
		else if (a >= '0' && a <= '9') {
            suma += a - '0';
            cout << "wartosc: " << a - '0' << endl;
        }
		cout << "Suma: " << suma << endl;
		if (suma > 350) break;
    }
}

/*zadanie 1.35 Wstaw do wektora n dziesięć dowolnych liczb całkowitych. Korzystając tylko z iteratora zwracanego przez funkcje .begin() i .end() lub korzystając z funkcji v.front() i v.back(), 
wyświetl wszystkie jego elementy (w dowolnej kolejności, żadnego nie pomijając). [1]
Możesz przestawiać elementy wektora i je usuwać. Nie możesz jednak w żadnym momencie używać notacji z pozycją, np. v[0], ani wykorzystać pętli jak w przykładzie: for (auto e : v)
    cout << e << endl;
 */
void zad1_35() {
	vector<int>v1 = { 1,2,3,4,5,6,7,8,9,10 };
    for (auto it = v1.begin(); it != v1.end();it++) {
        cout << *it << endl;
    }
    while (!v1.empty()) {
        cout << v1.front() << endl;
		v1.erase(v1.begin());
    }
}
/*zadanie 1.36 Sprawdź, czy trzy zmienne typu float mogą utworzyć trójkąt prostokątny, przy założeniu, że wartości zmiennych są długościami boków. 
Dla ułatwienia przyjmij, że te zmienne są zawsze >0. Jeżeli istnieje możliwość utworzenia trójkąta, poinformuj o tym odpowiednim komunikatem. Możesz wykorzystać to, 
że w trójkącie prostokątnym suma kwadratów długości przyprostokątnych wynosi tyle samo, ile kwadrat długości przeciwprostokątnej: (a² + b² = c²)*/
void zad1_36() {
    float a, b, c;
    cout << "Podaj boki trojkata: " << endl;
    cin >> a >> b >> c;
    if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a,2) + pow(c,2) == pow(b,2) || pow(b,2) + pow(c, 2) == pow(a, 2)) {
        cout << "Trojkat prostokatny" << endl;
    }
    else cout << "Trojkat nie jest prostokatny" << endl;
}
/*zadanie 1.37 Dla dwóch liczb, float A i float B, wykonaj operację mnożenia (A * B), nie korzystając ze znaku mnożenia *. 
Wykonaj to samo dla A typu float oraz B typu int, ale tym razem nie możesz użyć ani * ani / (mnożenia ani dzielenia). */
void zad1_37() {
    float A, B;
    cout << "Podaj liczby: " << endl;
    cin >> A >> B;
    float iloczyn = A / (1 / B);
    float iloczyn1=0;
    cout << "Iloczyn: " << iloczyn << endl;
    if (B >= 0) {
        for (int i = 0; i < (int)B;i++) {
            iloczyn1 += A;
        }
    }
    else if (B < 0) {
        for (int i = 0; i < abs((int)B);i++) {
            iloczyn1 += A;
        }
        iloczyn1 = -iloczyn1;
    }

    cout << "Iloczyn1: " << iloczyn1 << endl;
}
/*zadanie 1.38 W podanym ciągu poszukaj wszystkich podciągów, których suma wynosi 10. Pokaż elementy je tworzące i pozycje tych elementów (ciąg znajduje się również w pliku 38_ciag.txt).
1,2,3,5,6,3,5,7,5,8,9,0,3,1,4,7,5,6,2,4,3,2,5,1,3,6,9,8,1,0,5,6,5,7,6,2,8,4,3,2,5,8,9,6
Przez podciąg rozumiemy fragment zbioru składający się z sąsiadujących ze sobą liczb, czyli np. podciąg czteroelementowy to dowolne cztery bez omijania jakiejkolwiek.
*/
void zad1_38() {
    vector<int>v1 = { 1,2,3,5,6,3,5,7,5,8,9,0,3,1,4,7,5,6,2,4,3,2,5,1,3,6,9,8,1,0,5,6,5,7,6,2,8,4,3,2,5,8,9,6 };
    int suma = 0;
    int koniecpodciagu;
    int poczatekpodciagu;
    int dlugosc=0;
    bool znalezionoPodciag = false;
    for (int i = 0; i < v1.size();i++) {
        suma = 0;
        for (int j = i; j < v1.size();j++) {
            suma += v1[j];
            if (suma > 10) {
                break;
            }
            else if (suma == 10) {
                koniecpodciagu = j;
                dlugosc = j - i+1;
                poczatekpodciagu = koniecpodciagu - dlugosc + 1;
                cout << "Podciag: " << endl;
                for (int k = poczatekpodciagu;k <= koniecpodciagu;k++) {
                    cout << v1[k] << " pozycja: " << k << endl;
                }
                znalezionoPodciag = true;
            }
        }
    }
    if (!znalezionoPodciag) {
        cout << "Nie znaleziono podciągu" << endl;
    }

}
/* zadanie 1.39 Skopiuj do wektora następujące znaki:
{ 'x', '8', 'y', '4', '\n', '8', 'u', 'o', 'e', ' ', 'w', '1', 'd', '3', 'd', 'r', 'd', '8', 't', 'L', '5', 'y', 'B', 'x', ' ', 't', '9', 'e', 'd', '7' }

Pytania:
Wyświetl te znaki z wektora, które się powtórzyły, ale nie leżą na jego początku ani końcu.
Podaj sumę, którą tworzą wszystkie występujące w wektorze znaki będące cyfrą. */

void zad1_39() {
    vector<char>v1 = { 'x', '8', 'y', '4', '\n', '8', 'u', 'o', 'e', ' ', 'w', '1', 'd', '3', 'd', 'r', 'd', '8', 't', 'L', '5', 'y', 'B', 'x', ' ', 't', '9', 'e', 'd', '7' };
    int suma = 0;
    vector<char>v2;
    for (int i = 1;i < v1.size();i++) {
        if (v1[i] >= '0' && v1[i] <= '9') {
            suma += v1[i] - '0';
        }
        for (int j = i+1;j < v1.size()-2;j++) {
            if (v1[i] == v1[j]) {
                if (find(v2.begin(), v2.end(), v1[i]) == v2.end()) {
                    v2.push_back(v1[i]);
                } 
            break;
            }
        }
    }
    for (auto i : v2) cout << i << endl;
    cout << "Suma: " << suma << endl;
}