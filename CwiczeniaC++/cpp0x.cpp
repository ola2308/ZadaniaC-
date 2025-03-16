/*wskaźniki: Napisz funkcję void sortuj(int* begin, int* end), która dowolną metodą sortuje liczby w tablicy, podanej przez wskaźnik na pierwszy element i element za końcem tablicy. Weź funkcję wypisz() z przykładu i użyj tego main():
int main()
{
    int tab[ 10 ] = { 0, 9, 1, 3, 8, 2, 6, 7, 5, 4 };
    sortuj( tab, tab + 10 );
    wypisz( tab, 10 );

    std::cout << '\n';

    int tab2[ 16 ] = { 9, 7, 8, 6, 5, 4, 4, 0, 9, 6, 7, 1, 6, 3, 1, - 100 };
    sortuj( tab2, tab2 + 15 );
    wypisz( tab2, 15 );
}
Wewnątrz sortuj() postaraj się uniknąć przechodzenia na wskaźnik na początek i ilość elementów. (Wzoruj się na generuj(), nie na wypisz()). Poprawny wynik programu:
0 1 2 3 4 5 6 7 8 9
0 1 1 3 4 4 5 6 6 6 7 7 8 9 9

. Popraw błędy w następującym kodzie:
//Wskaźniki pierwsze zadanie----------
#include <iostream>
#include <conio.h>
int main()
{
    using namespace std;

    short zmienna = 213;
    short long * wskaznik = zmienna;

    //Wyświetlanie adresu wskaźnika
    cout << "&zmienna=" << zmienna << endl
    cout << "wskaznik=" << wskaznik << endl;
    //Wyświetlanie danych, na które wskazuje adres wskaźnika
    cout "Adres zmienna=" << * zmienna << endl;
    cout << "*wskaznik=" << wskaznik
    //Modyfikacja danych, na które wskazuje wskaźnik
    cout << "zmienna=" << zmiena << endl;
    * wskaznik = & 50;
    cout << "zmienna=" << zienna << endl;

    getch();
    return 0;
}
//---------------------------------------
link: https://cpp0x.pl/kursy/Kurs-C++/Poziom-5/Wskazniki/580
https://cpp0x.pl/kursy/Kurs-C++/Dodatkowe-materialy/Wskazniki/304
*/
/*wskaźnik this: 
link: https://cpp0x.pl/kursy/Programowanie-obiektowe-C++/Podstawy/Wskaznik-this/492
*/
/*zarządzanie pamięcią new delete: Zmodyfikuj przykładowy kod tak, aby nowa tablica nie była tworzona za każdym razem, gdy dodawany jest nowy element.
int main()
{
    int * tablica = nullptr, rozmiar = 0;
    std::cout << "Podawaj liczby, 0 konczy wczytywanie.\n";

    while( true )
    {
        int liczba;
        std::cin >> liczba;

        if( liczba == 0 )
             break;

        // Brakuje miejsca, utwórz większą tablicę
        int * nowa = new int[ rozmiar + 1 ];

        // Skopiuj dane
        for( int i = 0; i < rozmiar; ++i )
             nowa[ i ] = tablica[ i ];

        // Dodaj nową wartość
        nowa[ rozmiar ] = liczba;

        // Usuń starą tablicę
        delete[] tablica;

        // Zakutalizuj zmienne
        tablica = nowa;
        rozmiar++;
    }

    std::cout << "Te same liczby, ale odwrotnie!\n";

    for( int i = rozmiar - 1; i >= 0; --i )
         std::cout << tablica[ i ] << ' ';

    delete[] tablica;
}
link: https://cpp0x.pl/kursy/Kurs-C++/Poziom-5/Zarzadzanie-pamiecia-new-delete/581
https://cpp0x.pl/kursy/Kurs-C++/Dodatkowe-materialy/Dynamiczne-zarzadzanie-pamiecia-new-i-delete/307*/

/*struktury: Napisz funkcję
void dodajPoczatek( Lista *& lista, int liczba )
która dodaje liczby na początek listy, zamiast na koniec i użyj jej w przykładzie zamiast dodajKoniec(). Lista powinna wtedy zawierać liczby w przeciwnej kolejności i tak też je wypisać.
Zwróć uwagę, że dodajKoniec() używa funkcji ostatni(), a więc dodanie 1001. liczby wymaga przejścia przez 1000 węzłów tylko po to, by znaleźć koniec listy. Znajdź sposób na to, by dodawanie elementów na oba końce listy nie wymagało odwiedzania wszystkich węzłów.
Podpowiedź: Możesz potrzebować drugiego struct. 
link: https://cpp0x.pl/kursy/Kurs-C++/Poziom-5/Struktury/587  */
/* wskaźniki inteligentne: 
Zadanie: Zarządzanie kolekcją książek za pomocą wskaźników inteligentnych
Opis:
Napisz program w języku C++, który zarządza kolekcją książek w bibliotece, wykorzystując wskaźniki inteligentne.
Wymagania:
Zdefiniuj klasę Ksiazka z polami tytul i autor.​
Zaimplementuj klasę Biblioteka, która przechowuje książki za pomocą wskaźników inteligentnych, np. std::shared_ptr.​
Klasa Biblioteka powinna umożliwiać dodawanie książek oraz wyświetlanie ich listy.​
Wskazówki:
Użyj kontenera, takiego jak std::vector, do przechowywania wskaźników inteligentnych.​
Wskaźniki inteligentne automatycznie zarządzają pamięcią, co pomaga uniknąć wycieków

link https://cpp0x.pl/kursy/Kurs-C++/Poziom-5/Wskazniki-inteligentne-C++11/582 */
/* rekurencja: 
Zadanie: Obliczanie wartości silni liczby przy użyciu funkcji rekurencyjnej
Opis:
Napisz program w języku C++, który oblicza wartość silni dla zadanej liczby naturalnej
𝑛, wykorzystując funkcję rekurencyjną.
Wymagania:
Zdefiniuj funkcję rekurencyjną silnia, która dla liczby n zwraca wartość n!.
W funkcji main pobierz od użytkownika liczbę n, a następnie wywołaj funkcję silnia, aby obliczyć i wyświetlić wynik
link: https://cpp0x.pl/kursy/Kurs-C++/Poziom-5/Rekurencja/585  */

/*std::vector: 
 Napisz program w języku C++, który zarządza listą studentów, wykorzystując kontener std::vector. Każdy student powinien mieć przypisane imię, nazwisko oraz numer indeksu. Program powinien umożliwiać dodawanie nowych studentów do listy oraz wyświetlanie wszystkich zapisanych studentów.
 Zdefiniuj strukturę Student, zawierającą pola: imie, nazwisko oraz numerIndeksu.​
Utwórz klasę ListaStudentow, która będzie zarządzać listą studentów przy użyciu kontenera std::vector.​
Klasa ListaStudentow powinna zawierać metody:​
dodajStudenta(const std::string& imie, const std::string& nazwisko, int numerIndeksu): dodaje nowego studenta do listy.​
wyswietlStudentow(): wyświetla wszystkich studentów zapisanych w liście.
link: https://cpp0x.pl/kursy/Kurs-C++/Poziom-5/Kontener-std-vector/588 */
/* standardowe algorytmy: 
Napisz program w języku C++, który:
Wczytuje od użytkownika listę liczb całkowitych.​
Oblicza sumę wszystkich liczb wprowadzonej listy.​
Znajduje minimalną i maksymalną wartość w tej liście.​
Sortuje listę w porządku rosnącym.​
Usuwa duplikaty z listy.
Wykorzystaj standardowe algorytmy z biblioteki <algorithm>, takie jak std::accumulate, std::min_element, std::max_element, std::sort oraz std::unique.​
Do przechowywania listy liczb użyj kontenera std::vector<int>.​
Pamiętaj o odpowiednim zaimportowaniu niezbędnych nagłówków: <iostream>, <vector>, <algorithm> oraz <numeric>.
link https://cpp0x.pl/kursy/Kurs-C++/Poziom-5/Wprowadzenie-do-standardowych-algorytmow/590 
https://cplusplus.com/reference/ 
https://cpp0x.pl/dokumentacja/standard-C++/2 */

/*kontenery asocjacyjne std::set<> i std::map<> 
Napisz program w języku C++, który:

Wczytuje od użytkownika tekst składający się z wielu słów.​
Zlicza, ile razy każde słowo pojawia się w tekście, ignorując wielkość liter.​
Wyświetla listę unikalnych słów w porządku alfabetycznym wraz z informacją o liczbie ich wystąpień.
Użyj kontenera std::map do przechowywania słów jako kluczy oraz liczby ich wystąpień jako wartości.​
Użyj kontenera std::set do przechowywania unikalnych słów w celu ich posortowanego wyświetlenia.​
Program powinien być odporny na różnice w wielkości liter (np. "Słowo" i "słowo" powinny być traktowane jako to samo słowo).​
Pomiń znaki interpunkcyjne podczas analizy tekstu.
link https://cpp0x.pl/kursy/Kurs-C++/Poziom-5/Kontenery-asocjacyjne-std-set-i-std-map/589 */

/*wyrażenia lambda: 
Napisz program w języku C++, który:
Wczytuje od użytkownika listę liczb całkowitych.​
Usuwa z listy liczby ujemne, pozostawiając tylko liczby nieujemne.​
Sortuje pozostałe liczby w porządku rosnącym.​
Wyświetla przefiltrowaną i posortowaną listę.
Wykorzystaj wyrażenia lambda do filtrowania i sortowania listy.​
Użyj kontenera std::vector<int> do przechowywania liczb.​
Skorzystaj z algorytmów standardowej biblioteki C++, takich jak std::remove_if i std::sort.​
link https://cpp0x.pl/kursy/Kurs-C++/Poziom-5/Wyrazenia-lambda-C++11/591 */

/*wyjątki: 
Napisz program w języku C++, który:

Pobiera od użytkownika dwie liczby całkowite: dzielną i dzielnik.​
Oblicza wynik dzielenia dzielnej przez dzielnik.​
Jeśli dzielnik jest równy zero, zgłasza wyjątek i informuje użytkownika o błędzie.
link https://cpp0x.pl/kursy/Kurs-C++/Poziom-5/Wyjatki/596 */

/*operacje bitowe: 
Korzystając z funkcji z przykładu i wiedzy o kodzie U2, zaimplementuj funkcję, która odejmuje dwie liczby od siebie.
Zaimplementuj mnożenie dwóch liczb bez znaku, korzystając z dodawania oraz operacji bitowych. Naiwne rozwiązanie wyznaczania a * b to zsumowanie a w pętli, b razy. Użyj operacji bitowych, by ilość obiegów pętli nigdy nie była większa od długości liczby w bitach.
link: https://cpp0x.pl/kursy/Kurs-C++/Poziom-5/Operacje-bitowe/597 */

/*wirtualne destruktory: 
Napisz program w języku C++, który:

Definiuje klasę bazową Figura reprezentującą ogólną figurę geometryczną.​
Definiuje klasy pochodne Kolo i Kwadrat, dziedziczące po klasie Figura.​
Tworzy dynamicznie obiekty tych klas i przechowuje je w kontenerze wskaźników do klasy bazowej.​
Usuwa dynamicznie utworzone obiekty, zapewniając poprawne wywołanie destruktorów zarówno klasy bazowej, jak i pochodnych.​
Wymagania:

Zadeklaruj destruktor klasy Figura jako wirtualny, aby zapewnić poprawne zarządzanie pamięcią podczas usuwania obiektów przez wskaźnik do klasy bazowej.​
W każdej klasie zdefiniuj konstruktor i destruktor, które będą wypisywać komunikaty informujące o ich wywołaniu.​
Użyj kontenera std::vector do przechowywania wskaźników do obiektów klasy Figura.
link: https://cpp0x.pl/kursy/Kurs-C++/Poziom-X/Wirtualne-destruktory/247 */

/*wskaźniki na funkcje: 
Napisz program w języku C++, który:

Definiuje cztery funkcje wykonujące podstawowe operacje arytmetyczne: dodawanie, odejmowanie, mnożenie i dzielenie.​
Umożliwia użytkownikowi wybór operacji oraz wprowadzenie dwóch liczb.​
Wykorzystuje wskaźnik na funkcję do wykonania wybranej operacji na podanych liczbach.​
Wymagania:

Zdefiniuj funkcje: dodaj, odejmij, pomnoz oraz podziel, każda przyjmująca dwa argumenty typu double i zwracająca wynik typu double.​
Zadeklaruj typ wskaźnika na funkcję o nazwie Operacja, wskazującego na funkcje przyjmujące dwa argumenty typu double i zwracające double.​
Utwórz funkcję wykonajOperacje, która przyjmuje dwa argumenty typu double oraz wskaźnik na funkcję typu Operacja, a następnie zwraca wynik wywołania przekazanej funkcji.​
W funkcji main pobierz od użytkownika wybór operacji oraz dwie liczby, a następnie wywołaj odpowiednią funkcję za pośrednictwem wskaźnika na funkcję.
link: https://cpp0x.pl/kursy/Kurs-C++/Poziom-X/Wskaznik-na-funkcje/249 */

/*tablice zmiennych
Ćwiczenia
1. Napisz program, który wykona poniższe zadania:
2 + 7 * 16 - 8
22 * 2 : 11
8383 - 222 + 292 * 8
5 * 2 * 4
Wyniki zapisz do tabeli, a następnie wyświetl je na ekranie.

2. Używając tabeli z pierwszego zadania napisz program, który wyniki z pierwszego zadania przekaże do drugiej tabeli następnie wykona dodatkowe obliczenia odpowiednio:
wynik * 2 - 13
wynik - 4 + 1
wynik + 88 - 250
wynik + (doda wyniki jakie zostaną uzyskane z 3 poprzednich wyrażeń).
Najlepiej napisać program do pierwszego zadania a potem rozszerzyć go by wykonywał podane przykład.

3. Napisz program, który pobierze od użytkownika dwie liczby i wykona na nich działania:
dodawanie, odejmowanie, mnożenie i dzielenie. Wynik ma być wyświetlony w takiej formie:
Użytkownik podał następujące liczby
Liczba 1 = 20
Liczba 2 = 10

Wynik dodawania
20 + 10 = 30
Wynik odejmowania
20 - 10 = 10
Wynik mnożenia
20 * 10 = 200
Wynik dzielenia
20 : 10 = 2
Użyj dwóch tablic jedną na wyniki drugą na dwie liczby które poda użytkownik. Następnie spróbuj użyć tylko jednej tablicy.
link: https://cpp0x.pl/kursy/Kurs-C++/Dodatkowe-materialy/Tablice-zmiennych/298 */

/* ciągi znaków - łańcuchy: . Napisz program, który prosi o podanie, a potem wyświetla następujący informacje:
Podaj nazwę ulicy na której mieszkasz ? [b]Stefana Batorego[/b]
Podaj nr domu? [b]43/15[/b]
Na ile oceniasz swoje umiejętności programowania w skali [2 - 6]? [b]3[/b]
Twój staż programistyczny ? [b]5[/b]
Adres: Stefana Batorego 43/15
Ocena: 2
Staż: 5 dni
Program powinien przyjmować adres składający się więcej niż z jednego wyrazu. Dodatkowo ocena podana przez użytkownika powinna być przy wyświetleniu mniejsza o 1. Pogrubione informacje to te, które wpisuje użytkownik.

2. Napisz program, który prosi o podanie osobno imienia i nazwiska, a wyświetlający to w taki o to sposób:
Podałeś takie o to dane:
Nazwisko, Imię - życzę miłego dnia.
3. Przerób zadanie 6.3 Tablice wielowymiarowe. Użyj łańcuchów do zapisania nazw drużyn w zadaniu.
4.* Zadanie kontrolne
Napisz program, prostą bazę danych. Użytkownik podaje dane techniczne trzech samochodów,  marka, model, pojemność silnika, prędkość maksymalna. Dodatkowo wykonaj dwa działania arytmetyczne dodaj pojemności silników poszczególnych samochodów, oraz oblicz ich średnią prędkości maksymalną. Wszystkie dane mają być wprowadzone, oraz wyświetlone w sposób czytelny dla użytkownika podczas działania programu. Sam zaprojektuj czytelny interfejs.

Przykładowe samochody
Fiat; 126p; 0,65; 140,
Audi; S6; 4,2; 250,
Syrena; 105; 0,84, 120.
link: https://cpp0x.pl/kursy/Kurs-C++/Dodatkowe-materialy/Ciagi-znakow-lancuchy/299 */

/*struktury danych:
1. Farmer zwrócił się do Ciebie z prośbą byś napisał program, który będzie przechowywał informacje o rodzajach zwierząt jakie posiada. Zwierzęta to krowa, koza, kura, pies i świnia. Cechy tych zwierząt to nazwa, waga, wiek(podany w tygodniach), oraz data nabycia(zakupu). Farmer dodał, iż krowę i świnię kupił 24-04-08r od znajomego, pies przybłąkał się 6.05.02r, natomiast kozę i kurę dostał w prezencie od wójta 23.02.09. Niestety resztę cech musisz określić sam, na podstawie przyjętych średnich(google) dla tych zwierząt. Dane mają być zawarte w strukturze. Rezultatem programu ma być:
a) pierwszy program? wyświetlenie wszystkich danych w przejrzysty i zrozumiały dla użytkownika sposób, użytkownik nic nie podaje, program wyświetla tylko dane.
b) drugi program? program ma poprosić o wprowadzenie nazwy i wagi(w kilogramach) zwierzęcia(mają być wprowadzone trzy zwierzaki) , oraz wyświetleniu danych w odwrotny sposób do tego w jaki zostały wprowadzone, oraz  zachowaniu takiej kompozycji
C/C++
Trzoda zawiera m.in.:
1.->nazwa_zwierzecia jego waga to waga_zwierzecia( podana w gramach ) gram.
2.->
3.->
link: https://cpp0x.pl/kursy/Kurs-C++/Dodatkowe-materialy/Struktury-danych/303 */

/*obsługa plików: 

link: https://cpp0x.pl/kursy/Kurs-C++/Dodatkowe-materialy/Obsluga-plikow/305 */

/*funkcje kolejne aspekty: 
 Napisz program obliczający średnią Twoich ocen ze świadectwa(indeksu). Program ma pobierać tak długo liczby, aż podasz liczbę zero. Program ma posiadać funkcję sprawdzającą czy podany dane są liczbami, czyli ma zapobiegać uszkodzenia strumienia wejściowego.

2. Napisz program jak wyżej, jednak stwórz strukturę, która będzie przechowywać oceny dla poszczególnych podawanych przedmiotów np.
struct oceny {
    przedmiot1;
    przedmiot2;
    .
    .
}
Oczywiście podczas podawania ocen ma być wyświetlana informacja, dla jakiego przedmiotu jest wprowadzana dana. Możesz jako ostatnią pozycję w strukturze utworzyć zmienną średnia, która będzie przechowywać obliczoną średnią dla ocen z przedmiotów.
3. Używając rekurencji dla funkcji napisz program obliczającą silnie dla liczby. By przypomnieć silnia dla liczby 3 to inaczej działanie 1 * 2 * 3, dla liczby 6 to 1 * 2 * 3 * 4 * 5 * 6. Trzeba jednak pamiętać, że silnia 0! równa się 1!!!
4.* Zaprojektuj kalkulator, który będzie wykonywać wszystkie działania matematyczne jakie znasz. Dodatkowo ma mieć możliwość obliczenia pola i obwodów wszystkich znanych ci figur geometrycznych. Dla lepszej wizualizacji, proponuje stworzyć ciekawy interfejs oparty o bibliotekę DDT. Wszystkie operacje podczas działanie programu mają być zapisane w pliku. Czyli jeżeli użytkownik włączył program zrobił dodawanie i obliczył pole jakiejś figury i zakończył program, to wszystko co wykonał ma być zapisane w pliku o nazwie jaką sam wymyślisz. Dobrze by było by zapisane dane to te, które użytkownik widzi na ekranie podczas obsług programu. Wykorzystaj wszystkie poznane zagadnienia by napisać spójny i przyjazdy dla użytkownika program.
5. Napisz program, który uzyska ten sam wynik co przykład z 6.3 Tablice wielowymiarowe. Użyj funkcji, która będzie obsługiwać tabele w programie. Najpierw je wypełnij a potem wyświetl.


Napisz program, który wyświetli całą tabelę ligi Polskiej żużlowców. Tabela ma wyglądać jak tabela, z której będziesz przepisywać dane. Wszystkie dane mają być pobrane z pliku tekstowego o nazwie zuzel.txt. W jaki sposób zapiszesz dane w pliku nie jest istotne. Istotne jest to by utworzyć dwie funkcje jedna, która odczyta dane z pliku, a druga która te dane wyświetli. Użyj struktury do przechowywania wszystkich informacji o drużynie.  Napisz dwa wariant tego programu, jeden który będzie używać referencji do struktury, a drugi który będzie używać wskaźników.

2. Napisz program modyfikujący następujące dane z panelu logowania w DDT.
 Za każdym razie gdy uruchomisz program, ma on zwiększać liczbę zarejestrowanych użytkowników o 2. Natomiast liczba wszystkich ma być zmniejszana o liczbę zalogowanych.
Czyli po 10 uruchomieniach liczba zarejestrowanych powinna wynosić 2682, a liczba wszystkich 94978. Oczywiście by tego dokonać należy zapisać dane w pliku. Spróbuj również stworzyć ramkę podobną do tej ze strony. Mam nadzieje, iż nie muszę dodawać byś wykorzystał do tego funkcje, sam określ ich liczbę oraz co będą wykonywać.
link: https://cpp0x.pl/kursy/Kurs-C++/Dodatkowe-materialy/Funkcje-kolejne-aspekty/306
https://cpp0x.pl/kursy/Kurs-C++/Dodatkowe-materialy/Funkcje-raz-jeszcze/308 */

/*składnia przestrzeni nazw: 
1. Skoryguj następujące zadania z poprzednich lekcji:
Wykorzystanie struktury w praktyce,
Tablice struktur,
Pozostałe funkcje, wykorzystywane podczas pracy z plikami,
Funkcji a tablice,
usuwając z nich linijkę using namespace std; i zastosuj odpowiednie mechanizmy przestrzeni nazw.
link: https://cpp0x.pl/kursy/Kurs-C++/Dodatkowe-materialy/Przestrzenie-nazw/309 */

/*klasy: 
Opis:

Napisz program w języku C++, który definiuje klasę Prostokat reprezentującą prostokąt o określonych wymiarach. Klasa powinna umożliwiać:

Ustawienie długości i szerokości prostokąta.​
Obliczenie pola prostokąta.​
Obliczenie obwodu prostokąta.​
Wymagania:

Zdefiniuj klasę Prostokat z prywatnymi polami dlugosc i szerokosc typu double.​
Udostępnij publiczne metody:​
Konstruktor bezparametrowy inicjujący długość i szerokość na 1.​
Konstruktor z parametrami umożliwiający ustawienie długości i szerokości.​
Metody ustawDlugosc(double dl) i ustawSzerokosc(double sz) do ustawiania wymiarów prostokąta.​
Metody pobierzDlugosc() i pobierzSzerokosc() zwracające aktualne wymiary prostokąta.​
Metodę obliczPole() zwracającą pole prostokąta.​
Metodę obliczObwod() zwracającą obwód prostokąta.
link: https://cpp0x.pl/kursy/Kurs-C++/Dodatkowe-materialy/Klasy-obiekty/311 */

/*metody: 
Opis:

Napisz program w języku C++, który definiuje klasę Student reprezentującą studenta z listą ocen. Klasa powinna umożliwiać:

Dodawanie ocen do listy.​
Obliczanie średniej arytmetycznej ocen.​
Wyświetlanie wszystkich ocen oraz obliczonej średniej.​
Wymagania:

Zdefiniuj klasę Student z prywatnym polem oceny, będącym wektorem (std::vector) przechowującym liczby typu double.​
Udostępnij publiczne metody:​
void dodajOcene(double ocena) – dodaje nową ocenę do listy.​
double obliczSrednia() const – oblicza i zwraca średnią arytmetyczną ocen.​
void wyswietlOceny() const – wyświetla wszystkie oceny oraz obliczoną średnią.
link: https://cpp0x.pl/kursy/Kurs-C++/Dodatkowe-materialy/Funkcje-w-klasie-czyli-metody/312 */

/*konstruktor/destruktor/konstruktor kopiujący:
Napisz program w języku C++, który definiuje klasę Tablica zarządzającą dynamicznie alokowaną tablicą liczb całkowitych. Klasa powinna umożliwiać:

Tworzenie obiektu z określoną liczbą elementów i inicjalizowanie ich wartościami domyślnymi.​
Kopiowanie obiektu, tak aby każda instancja miała własną kopię tablicy.​
Zwalnianie zaalokowanej pamięci po zakończeniu użycia obiektu.​
Wymagania:

Zdefiniuj klasę Tablica z prywatnymi polami:​
int* dane – wskaźnik na dynamicznie alokowaną tablicę liczb całkowitych.​
std::size_t rozmiar – liczba elementów w tablicy.​
Udostępnij publiczne metody:​
Konstruktor bezparametrowy, który tworzy pustą tablicę.​
Konstruktor z parametrem określającym liczbę elementów, który alokuje pamięć i inicjalizuje elementy wartościami domyślnymi (np. zerami).​
Konstruktor kopiujący, który tworzy głęboką kopię tablicy.​
Destruktor, który zwalnia zaalokowaną pamięć.​
Metodę ustawWartosc(std::size_t indeks, int wartosc), która ustawia wartość elementu na podanym indeksie.​
Metodę pobierzWartosc(std::size_t indeks) const, która zwraca wartość elementu na podanym indeksie.​
Metodę pobierzRozmiar() const, która zwraca liczbę elementów w tablicy.
link  https://cpp0x.pl/kursy/Programowanie-obiektowe-C++/Podstawy/Konstruktor-jawny/510
https://cpp0x.pl/kursy/Programowanie-obiektowe-C++/Podstawy/Konstruktory-i-destruktory/490
https://cpp0x.pl/kursy/Kurs-C++/Dodatkowe-materialy/Konstruktor-destruktor-i-konstruktor-kopiujacy-klasy/313 */

/*Unia w C++:
Napisz program w języku C++, który definiuje unię mogącą przechowywać różne typy danych, takie jak liczba całkowita, liczba zmiennoprzecinkowa oraz znak. Program powinien umożliwiać:

Zadeklarowanie unii zawierającej pola dla każdego z wymienionych typów.​
Przypisanie wartości do poszczególnych pól unii.​
Wyświetlenie wartości aktualnie przechowywanej w unii.​
Wymagania:
Zdefiniuj unię o nazwie Dane, zawierającą pola:​
int liczbaCalkowita;​
float liczbaZmiennoprzecinkowa;​
char znak;​
W funkcji main:​
Utwórz zmienną typu Dane.​
Przypisz wartość do pola liczbaCalkowita i wyświetl jej zawartość.​
Przypisz wartość do pola liczbaZmiennoprzecinkowa i wyświetl jej zawartość.​
Przypisz wartość do pola znak i wyświetl jej zawartość.
link: https://cpp0x.pl/kursy/Kurs-C++/Dodatkowe-materialy/Unia-w-C++/314 */

/*szablony funkcji:
Napisz szablon funkcji o nazwie maksimum, który przyjmuje dwa argumenty dowolnego typu i zwraca większy z nich. Funkcja powinna działać dla typów, dla których zdefiniowany jest operator porównania >.

Wymagania:

Zdefiniuj szablon funkcji maksimum, który:​
Przyjmuje dwa parametry tego samego typu.​
Zwraca wartość większego z nich.​
Przetestuj funkcję maksimum dla różnych typów danych, takich jak int, double oraz std::string.​
Wskazówki:

Użyj słowa kluczowego template do zdefiniowania szablonu funkcji.​
Funkcja powinna zwracać wartość tego samego typu, który przyjmuje jako argumenty.​
Upewnij się, że typy używane z funkcją maksimum mają zdefiniowany operator > umożliwiający porównanie.
link: http://cpp0x.pl/kursy/Kurs-C++/Dodatkowe-materialy/Szablony-funkcji/315 */

/*szablony klas:
Napisz szablon klasy o nazwie Para, który będzie przechowywał dwie wartości dowolnych typów. Klasa powinna umożliwiać:

Inicjalizację dwóch wartości podczas tworzenia obiektu.​
Pobieranie i ustawianie wartości dla obu elementów pary.​
Microsoft Learn
Wyświetlanie zawartości pary.​
Wymagania:

Zdefiniuj szablon klasy Para z dwoma parametrami szablonu: T1 i T2.​
Klasa powinna zawierać prywatne pola:​
pierwszy typu T1.​
drugi typu T2.​
Udostępnij publiczne metody:​
Konstruktor przyjmujący dwa argumenty typu T1 i T2 do inicjalizacji pól pierwszy i drugi.​
Metody pobierzPierwszy() i pobierzDrugi(), zwracające odpowiednio wartości pól pierwszy i drugi.​
Metody ustawPierwszy(const T1& wartosc) i ustawDrugi(const T2& wartosc), umożliwiające ustawienie nowych wartości dla pól pierwszy i drugi.​
Metodę wyswietl(), wyświetlającą wartości pól pierwszy i drugi.
link: https://cpp0x.pl/kursy/Kurs-C++/Dodatkowe-materialy/Szablony-klas/317 */

/*typ wyliczeniowy enum: 
Napisz program w języku C++, który definiuje typ wyliczeniowy Kierunek reprezentujący cztery główne kierunki geograficzne: północ, wschód, południe, zachód. Program powinien umożliwiać:

Przypisanie zmiennej typu Kierunek jednej z wartości: Polnoc, Wschod, Poludnie, Zachod.​
Wyświetlenie nazwy aktualnie przypisanego kierunku.​
Zmianę kierunku na przeciwny i wyświetlenie jego nazwy.​
Wymagania:

Zdefiniuj typ wyliczeniowy Kierunek z wartościami: Polnoc, Wschod, Poludnie, Zachod.​
Utwórz funkcję std::string nazwaKierunku(Kierunek k), która zwraca nazwę kierunku jako napis.​
Utwórz funkcję Kierunek przeciwnyKierunek(Kierunek k), która zwraca przeciwny kierunek do podanego.​
W funkcji main przetestuj działanie obu funkcji, wyświetlając odpowiednie komunikaty.
link: https://cpp0x.pl/kursy/Kurs-C++/Dodatkowe-materialy/Typ-wyliczeniowy-enum/318 */

/*biblioteka time.h: 
Napisz program w języku C++, który:

Wyświetli aktualną datę i godzinę w formacie: "Dzień-Miesiąc-Rok Godzina:Minuta:Sekunda".​
Zmierz czas wykonania pętli, która wykonuje milion iteracji, i wyświetli go w sekundach.​
Wymagania:

Użyj funkcji z biblioteki <time.h> do uzyskania aktualnego czasu oraz do mierzenia czasu procesora.​
Skorzystaj ze struktury tm do sformatowania aktualnej daty i godziny
Użyj funkcji clock() do zmierzenia czasu wykonania pętli.

link:  https://cpp0x.pl/kursy/Kurs-C++/Dodatkowe-materialy/Biblioteka-time-h/321
*/

/*switch...case:
Napisz prosty kalkulator dla dwóch liczb, obsługujący cztery działania matematycznie: +, -, * i /. Wykorzystaj wiedzę zdobytą z niniejszego rozdziału.
link: https://cpp0x.pl/kursy/Kurs-C++/Poziom-1/Warunek-wielokrotnego-wyboru-switch-case/17 */

/*pseudolosowe liczby: 
Twoim zadaniem domowym jest napisanie prostej gry, która ma działać następująco:
1. Program losuje liczbę z przedziału od 1 do 1000.
2. Użytkownik zgaduje liczbę, która została wylosowana.
3. Jeżeli podana liczba jest za duża (za mała) gra wypisuje stosowny komunikat i powraca do kroku 2.
4. Jeżeli gracz trafi liczbę wylosowaną to progam kończy działanie, wypisując na ekran wylosowaną liczbę oraz liczbę 'strzałów', które oddał gracz.
Gra ma być zabezpieczona przed możliwością wprowadzenia błędnych wartości liczbowych.
link: https://cpp0x.pl/kursy/Kurs-C++/Poziom-2/Pseudolosowe-liczby-calkowite/290 */

/*tablice jednowymiarowe:
Napisz program, który wylosuje 999 liczb całkowitych z zakresu od 4 do 10 włącznie, wypisze te wartości na ekran, po czym zsumuje je i wynik wypisze na ekran. Program ma wykorzystywać tablicę, która zostanie najpierw wypełniona liczbami losowymi z określonego przedziału, a następnie wynik zostanie obliczony na podstawie zawartości całej tablicy.
Napisz program, który wylosuje 999 liczb całkowitych z zakresu od 4 do 10 włącznie, wypisze te wartości na ekran, po czym zsumuje je i wynik wypisze na ekran. Wszelkie operacje mają zostać zrealizowane w oparciu o funkcje. Tablica ma być zadeklarowana w funkcji main. Oczekiwane funkcje:
Wypełnienie tablicy o podanym rozmiarze losowymi liczbami z przedziału podawanego przez argumenty funkcji.
Sumowanie określonej ilości liczb znajdujących się w tablicy i zwrot wyniku.
Wypisywanie zawartości tablicy.
Przykładowa implementacja funkcji main:
int main()
{
    int tablica[ 999 ];
    wylosujLiczby( tablica, 999, 4, 10 );
    wypiszLiczby( tablica, 999 );
    int iSuma = obliczSume( tablica, 999 );
    std::cout << "Suma liczb wynosi: " << iSuma << std::endl;
    return 0;
}
link: https://cpp0x.pl/kursy/Kurs-C++/Poziom-2/Tablice-jednowymiarowe/292 
https://cpp0x.pl/kursy/Kurs-C++/Poziom-2/Przekazywanie-tablic-jednowymiarowych-do-funkcji/324 */

/*losowanie bez powtórzeń: 
Napisz program, który wczyta 3 liczby podane przez użytkownika do tablicy, a następnie wylosuje 2 z nich bez powtórzeń. Wynik wypisz na ekran. Postaraj się napisać ten program w oparciu o funkcje.

Uwaga!
Treść niniejszego rozdziału nie zawiera rozwiązania problemu lecz wskazówki - zadanie wymaga przede wszystkim zastanowienia się i przeprowadzenia szczegółowej analizy problemu do konkretnego przypadku przedstawionego w zadaniu. Zadanie nie wymaga większej wiedzy z zakresu programowania niż ta, która została przedstawiona do tej pory.

2. Zmodyfikuj program z pierwszego zadania tak, aby użytkownik musiał podać 10 liczb, a 8 z nich będzie losowanych bez powtórzeń. Sprawdź czy wyniki są poprawne.
link: https://cpp0x.pl/kursy/Kurs-C++/Poziom-2/Losowanie-bez-powtorzen/293 */

/*dziedziczenie:
Napisz program w języku C++, który definiuje hierarchię klas reprezentujących różne figury geometryczne. W szczególności:​

Klasa bazowa Figura, która będzie zawierać
Wirtualną metodę pole(), zwracającą pole powierzchni figury
Wirtualną metodę obwod(), zwracającą obwód figury
Klasy pochodne
Prostokat, reprezentującą prostokąt, z dodatkowymi polami szerokosc i wysokosc
Kolo, reprezentującą koło, z dodatkowym polem promien
W funkcji main() utwórz obiekty klas Prostokat i Kolo, a następnie wyświetl ich pola powierzchni oraz obwody.

Wymagania:

Użyj mechanizmu dziedziczenia, aby klasy Prostokat i Kolo dziedziczyły po klasie Figura.​
Zaimplementuj metody pole() i obwod() w klasach pochodnych, aby zwracały odpowiednie wartości dla danej figur
Użyj funkcji wirtualnych, aby zapewnić polimorfizm i umożliwić wywoływanie odpowiednich metod dla obiektów klas pochodnych poprzez wskaźnik lub referencję do klasy bazowej.

link: https://cpp0x.pl/kursy/Programowanie-obiektowe-C++/Polimorfizm/Dziedziczenie/494 */