#include"strumienie.h"

void wczytywanieZPliku() {
    string tresc[5];
    string odpA[5], odpB[5], odpC[5], odpD[5];
    string poprawna[5];

    int nr_linii = 1;
    string linia;
    int nr_pytania = 0;
    string odp;
    int punkty = 0;

    fstream plik;
    plik.open("quiz.txt", ios::in);  // Usuñ './' jeœli plik jest w katalogu projektu
    if (!plik.good()) {
        cout << "Nie ma takiego pliku!" << endl;
        exit(0);
    }

    while (getline(plik, linia)) {

        switch (nr_linii) {
        case 1:
            tresc[nr_pytania] = linia;
            break;
        case 2:
            odpA[nr_pytania] = linia;
            break;
        case 3:
            odpB[nr_pytania] = linia;
            break;
        case 4:
            odpC[nr_pytania] = linia;
            break;
        case 5:
            odpD[nr_pytania] = linia;
            break;
        case 6:
            poprawna[nr_pytania] = linia;
            nr_pytania++;  // Po zapisaniu kompletnego pytania zwiêksz licznik pytañ
            nr_linii = 0;  // Reset numeracji linii dla nowego pytania
            break;
        }

        nr_linii++;
    }

    plik.close();

    // Wyœwietlenie danych
    for (int i = 0; i < nr_pytania; i++) {
        cout << "\nPytanie " << i+1 << ": " << tresc[i] << endl;
        cout << "A) " << odpA[i] << "\nB) " << odpB[i]
            << "\nC) " << odpC[i] << "\nD) " << odpD[i] << endl;
        cout << "Podaj odpowiedz:" << endl;
        cin >> odp;
        transform(odp.begin(), odp.end(), odp.begin(), ::tolower);
        if (odp == poprawna[i]) {
            punkty++;
        }
        else cout << "Niepoprawna odpowiedz! Poprawna to: " << poprawna[i] << endl;
    }
    cout << "Zdobyles: " << punkty << "punktow" << endl;
}