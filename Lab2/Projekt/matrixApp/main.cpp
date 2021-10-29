#include <iostream>
#include "../matrixLib/include/matrix.h"

using namespace std;

void help();

bool sprawdzLiczbe(string, bool &);

class Macierz {
public:
    int **macierzInt;
    double **macierzDouble;

    int iloscWierszy, iloscKolumn;
    bool macierzIsDouble = false;

    //Wczytanie macierzy
    void wczytajMacierz() {
        //Wczytanie z konsoli wielkosci macierzy
        cout << "Wprowadz ilosc wierszy dla macierzy:";
        cin >> iloscWierszy;
        cout << "Wprowadz ilosc kolumn dla macierzy:";
        cin >> iloscKolumn;

        //Stworzenie pomocniczej tablicy do ktorej przepiszemy odpowiednie wartosci
        double **macierz = new double *[iloscWierszy];

        for (int i = 0; i < iloscWierszy; i++) {
            macierz[i] = new double[iloscKolumn];
        }

        string liczbaString;
        bool liczbaIsDouble;

        //Pobranie wartosci z konsoli i zapisanie ich w macierzy
        for (int x = 0; x < iloscWierszy; x++) {
            for (int y = 0; y < iloscKolumn; y++) {
                pobranieLiczby:
                cout << "Podaj wartosc macierzy [" << x << ", " << y << "]:";

                cin >> liczbaString;

                //Sprawdzenie czy wprowadzona wartosc jest poprawna, jesli nie to przechodzimy do etykiety "pobranieLiczby"
                //i pobieramy ja ponownie
                if (!sprawdzLiczbe(liczbaString, liczbaIsDouble)) {
                    goto pobranieLiczby;
                }

                if (liczbaIsDouble) {
                    macierzIsDouble = true;
                }

                if (macierzIsDouble) {
                    macierz[x][y] = atof(liczbaString.c_str());
                } else {
                    macierz[x][y] = atoi(liczbaString.c_str());
                }
            }
        }

        cout << "Macierz zostala stworzona! " << endl;

        tworzenieMacierzy(macierzIsDouble);

        //Przepisanie wartosci z pomocniczej macierzy do glownej macierzy w zaleznosci od typu macierzy
        for (int x = 0; x < iloscWierszy; x++) {
            for (int y = 0; y < iloscKolumn; y++) {
                if (macierzIsDouble == true) {
                    macierzDouble[x][y] = macierz[x][y];
                } else {
                    macierzInt[x][y] = (int) macierz[x][y];
                }
            }
        }

        //Wyswietlenie stworzonej macierzy
        wyswietlMacierz(macierzIsDouble);

        //Usuniecie pomocniczej macierzy i zmolnienie pamieci
        for (int i = 0; i < iloscWierszy; i++) {
            delete[] macierz[i];
        }
        delete[] macierz;
    }

    //Stworzenie macierzy o odpowiednim typie
    void tworzenieMacierzy(bool macierzIsDouble) {
        if (macierzIsDouble == true) {
            macierzDouble = new double *[iloscWierszy];

            for (int i = 0; i < iloscWierszy; i++) {
                macierzDouble[i] = new double[iloscKolumn];
            }
        } else {
            macierzInt = new int *[iloscWierszy];

            for (int i = 0; i < iloscWierszy; i++) {
                macierzInt[i] = new int[iloscKolumn];
            }
        }
    }

    //Wyswietlenie macierzy
    void wyswietlMacierz(bool macierzIsDouble) {
        cout << endl;
        for (int x = 0; x < iloscWierszy; x++) {
            for (int y = 0; y < iloscKolumn; y++) {

                //Wyswietlenie macierzy w zaleznosci od tego, czy macierz jest typu int czy typu double
                if (macierzIsDouble == true) {
                    cout << "[" << macierzDouble[x][y] << "] ";
                } else {
                    cout << "[" << macierzInt[x][y] << "] ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    //Usuniecie macierzy i zmolnienie pamieci
    void usunMacierz(bool macierzIsDouble) {
        for (int i = 0; i < iloscWierszy; i++) {
            if (macierzIsDouble == true) {
                delete[] macierzDouble[i];
            } else {
                delete[] macierzInt[i];
            }
        }
        if (macierzIsDouble == true) {
            delete[] macierzDouble;
        } else {
            delete[] macierzInt;
        }
    }

    //Przekonwertowanie macierzy Int na macierz Double
    void przekonwertujMacierz() {
        //Stworzenie macierzy Double
        tworzenieMacierzy(true);

        //Przepisanie wartosci z macierzy Int do macierzy Double
        for (int i = 0; i < iloscWierszy; i++) {
            for (int j = 0; j < iloscKolumn; j++) {
                macierzDouble[i][j] = (double) macierzInt[i][j];
            }
        }

        //Usuniecie macierzy w celu zwolnienia pamieci
        usunMacierz(false);

        macierzIsDouble = true;
    }
};

int main(int argc, char *argv[]) {

    //Dodawanie, odejmowanie, mnozenie macierzy.
    if (argv[1] == string("addMatrix") || argv[1] == string("subtractMatrix") || argv[1] == string("multiplyMatrix")) {
        Macierz a, b, wynik;

        a.wczytajMacierz();
        b.wczytajMacierz();

        //Jesli mnozymy macierze to musimy pamietac, ze macierz wynikowa bedzie miala inna wielkosc
        if (argv[1] == string("multiplyMatrix")) {
            wynik.iloscWierszy = a.iloscWierszy;
            wynik.iloscKolumn = b.iloscKolumn;
        } else {
            wynik.iloscWierszy = a.iloscWierszy;
            wynik.iloscKolumn = a.iloscKolumn;
        }

        //Sprawdzenie typow macierzy i w zaleznosci od ich typow, stworzenie i przepisanie wartosci
        //do macierzy wynik.
        if (a.macierzIsDouble || b.macierzIsDouble) {
            //Jeśli obie macierze nie sa tego samego typu to wykonujemy konwersje aby obie macierze byly jednego typu.
            if (a.macierzIsDouble && !b.macierzIsDouble) {
                b.przekonwertujMacierz();
                cout << "Przekonwertowanie macierzy B na typ Double! " << endl;
            } else if (!a.macierzIsDouble && b.macierzIsDouble) {
                a.przekonwertujMacierz();
                cout << "Przekonwertowanie macierzy A na typ Double! " << endl;
            }

            //Jesli jedna z macierzy ma wartosci typu Double to macierz wynikowa tez bedzie wartosci Double.
            wynik.macierzIsDouble = true;
            wynik.tworzenieMacierzy(wynik.macierzIsDouble);

            if (argv[1] == string("addMatrix")) {
                wynik.macierzDouble = addMatrix(a.macierzDouble, b.macierzDouble, a.iloscWierszy,
                                                a.iloscKolumn);
            } else if (argv[1] == string("subtractMatrix")) {
                wynik.macierzDouble = subtractMatrix(a.macierzDouble, b.macierzDouble, a.iloscWierszy, a.iloscKolumn);
            } else if (argv[1] == string("multiplyMatrix")) {
                wynik.macierzDouble = multiplyMatrix(a.macierzDouble, b.macierzDouble, a.iloscWierszy, a.iloscKolumn,
                                                     b.iloscKolumn);
            }
        } else {
            wynik.tworzenieMacierzy(wynik.macierzIsDouble);

            if (argv[1] == string("addMatrix")) {
                wynik.macierzInt = addMatrix(a.macierzInt, b.macierzInt, a.iloscWierszy, a.iloscKolumn);
            } else if (argv[1] == string("subtractMatrix")) {
                wynik.macierzInt = subtractMatrix(a.macierzInt, b.macierzInt, a.iloscWierszy, a.iloscKolumn);
            } else if (argv[1] == string("multiplyMatrix")) {
                wynik.macierzInt = multiplyMatrix(a.macierzInt, b.macierzInt, a.iloscWierszy, a.iloscKolumn,
                                                  b.iloscKolumn);
            }
        }

        //Wyswietlenie wyniku
        if (argv[1] == string("addMatrix")) {
            cout << "Wynik dodawania macierzy: " << endl;
        } else if (argv[1] == string("subtractMatrix")) {
            cout << "Wynik odejmowania macierzy: " << endl;
        } else if (argv[1] == string("multiplyMatrix")) {
            cout << "Wynik mnozenia macierzy: " << endl;
        }
        wynik.wyswietlMacierz(wynik.macierzIsDouble);

        //Usuwanie danych z pamieci
        a.usunMacierz(a.macierzIsDouble);
        b.usunMacierz(b.macierzIsDouble);
        wynik.usunMacierz(wynik.macierzIsDouble);
    }
        //Mnozenie macierzy przez skalar
    else if (argv[1] == string("multiplyByScalar")) {
        Macierz a, wynik;

        a.wczytajMacierz();

        string skalarString;
        bool skalarIsDouble = false;
        int skalarInt = 1;
        double skalarDouble = 1;

        pobierzSkalar:
        cout << "Podaj skalar: ";

        cin >> skalarString;

        //Sprawdzenie, czy podana wartosc jest poprawna liczba, jesli nie, to przechodzimy do etykiety pobierzSkalar
        if (!sprawdzLiczbe(skalarString, skalarIsDouble)) {
            goto pobierzSkalar;
        }

        if (skalarIsDouble) {
            skalarDouble = atof(skalarString.c_str());
        } else {
            skalarInt = atoi(skalarString.c_str());
        }

        wynik.iloscWierszy = a.iloscWierszy;
        wynik.iloscKolumn = a.iloscKolumn;

        //Sprawdzenie typow macierzy i w zaleznosci od ich typow, stworzenie i przepisanie wartosci
        //do macierzy wynik.
        if (a.macierzIsDouble || skalarIsDouble) {
            //Jesli skalar nie jest typu Double to musimy go zamienic na typ Double
            if (!skalarIsDouble) {
                skalarDouble = (double) skalarInt;
            }
                //Jesli skalar jest typu Double a macierz A nie jest, to musimy ta macierz zamienic na typ Double
            else if (!a.macierzIsDouble) {
                a.przekonwertujMacierz();
            }

            wynik.macierzIsDouble = true;
            wynik.tworzenieMacierzy(wynik.macierzIsDouble);

            wynik.macierzDouble = multiplyByScalar(a.macierzDouble, a.iloscWierszy, a.iloscKolumn, skalarDouble);
        } else {
            wynik.tworzenieMacierzy(wynik.macierzIsDouble);
            wynik.macierzInt = multiplyByScalar(a.macierzInt, a.iloscWierszy, a.iloscKolumn, skalarInt);
        }

        //Wyswietlenie wyniku
        cout << "Wynik mnozenia macierzy przez skalar: " << endl;
        wynik.wyswietlMacierz(wynik.macierzIsDouble);

        //Usuwanie danych z pamieci
        a.usunMacierz(a.macierzIsDouble);
        wynik.usunMacierz(wynik.macierzIsDouble);
    }
        //Transponowanie macierzy
    else if (argv[1] == string("transpozeMatrix")) {
        Macierz a, wynik;

        a.wczytajMacierz();

        wynik.iloscWierszy = a.iloscKolumn;
        wynik.iloscKolumn = a.iloscWierszy;

        //Sprawdzenie typow macierzy i w zaleznosci od ich typow, stworzenie i przepisanie wartosci
        //do macierzy wynik.
        if (a.macierzIsDouble) {
            wynik.macierzIsDouble = true;
            wynik.tworzenieMacierzy(wynik.macierzIsDouble);

            wynik.macierzDouble = transpozeMatrix(a.macierzDouble, a.iloscWierszy, a.iloscKolumn);
        } else {
            wynik.tworzenieMacierzy(wynik.macierzIsDouble);
            wynik.macierzInt = transpozeMatrix(a.macierzInt, a.iloscWierszy, a.iloscKolumn);
        }

        //Wyswietlenie wyniku
        cout << "Wynik transponowania macierzy: " << endl;
        wynik.wyswietlMacierz(wynik.macierzIsDouble);

        //Usuwanie danych z pamieci
        a.usunMacierz(a.macierzIsDouble);
        wynik.usunMacierz(wynik.macierzIsDouble);
    }
        //Potegowanie macierzy
    else if (argv[1] == string("powerMatrix")) {
        if (argc != 3) {
            help();

            cout << endl << "ERROR: Niepoprawna ilosc parametrow. Prawidlowe wywolanie to: powerMatrix [potega]" << endl
                 << endl;

            return 1;
        }

        Macierz a, wynik;

        a.wczytajMacierz();

        wynik.iloscWierszy = a.iloscWierszy;
        wynik.iloscKolumn = a.iloscKolumn;

        unsigned potega = atoi(string(argv[2]).c_str());

        //Sprawdzenie typow macierzy i w zaleznosci od ich typow, stworzenie i przepisanie wartosci
        //do macierzy wynik.
        if (a.macierzIsDouble) {
            wynik.macierzIsDouble = true;
            wynik.tworzenieMacierzy(wynik.macierzIsDouble);

            wynik.macierzDouble = powerMatrix(a.macierzDouble, a.iloscWierszy, a.iloscKolumn, potega);
        } else {
            wynik.tworzenieMacierzy(wynik.macierzIsDouble);
            wynik.macierzInt = powerMatrix(a.macierzInt, a.iloscWierszy, a.iloscKolumn, potega);
        }

        //Wyswietlenie wyniku
        cout << "Wynik potegowania macierzy: " << endl;
        wynik.wyswietlMacierz(wynik.macierzIsDouble);

        //Usuwanie danych z pamieci
        a.usunMacierz(a.macierzIsDouble);
        wynik.usunMacierz(wynik.macierzIsDouble);
    } else if (argv[1] == string("determinantMatrix")) {
        Macierz a;
        a.wczytajMacierz();

        if (a.macierzIsDouble) {
            double wynik = determinantMatrix(a.macierzDouble, a.iloscWierszy, a.iloscKolumn);
            cout << "Wyznacznik macierzy to: " << wynik << endl;
        } else {
            int wynik = determinantMatrix(a.macierzInt, a.iloscWierszy, a.iloscKolumn);
            cout << "Wyznacznik macierzy to: " << wynik << endl;
        }

        //Usuwanie danych z pamieci
        a.usunMacierz(a.macierzIsDouble);
    }

        //Sprawdzenie czy macierz jest diagonalna
    else if (argv[1] == string("matrixIsDiagonal")) {
        Macierz a;

        a.wczytajMacierz();

        bool macierzJestDiagonalna = false;

        if (a.macierzIsDouble) {
            macierzJestDiagonalna = matrixIsDiagonal(a.macierzDouble, a.iloscWierszy, a.iloscKolumn);
        } else {
            macierzJestDiagonalna = matrixIsDiagonal(a.macierzInt, a.iloscWierszy, a.iloscKolumn);
        }

        //Wyswietlenie wyniku
        if (macierzJestDiagonalna) {
            cout << "Macierz jest diagonalna. ";
        } else {
            cout << "Macierz nie jest diagonalna. ";
        }

        //Usuwanie danych z pamieci
        a.usunMacierz(a.macierzIsDouble);
    }
        //Zamiana dwoch wartosci miejscami
    else if (argv[1] == string("swap")) {
        if (argc != 4) {
            help();

            cout << endl << "ERROR: Niewlasciwa ilosc parametrow. Poprawne uzycie swap [liczba1] [liczba2]" << endl
                 << endl;
            return 0;
        }

        struct Liczba {
            int liczbaInt;
            double liczbaDouble;
            bool liczbaIsDouble;
        };

        Liczba l1, l2;
        string liczbaString;

        liczbaString = argv[2];

        //Jesli pierwsza liczba jest niepoprawna, to przerywamy dzialanie programu.
        if (!sprawdzLiczbe(liczbaString, l1.liczbaIsDouble)) {
            return 1;
        }

        if (l1.liczbaIsDouble) {
            l1.liczbaDouble = atof(liczbaString.c_str());
        } else {
            l1.liczbaInt = atoi(liczbaString.c_str());
        }

        liczbaString = argv[3];

        //Jesli druga liczba jest niepoprawna, to przerywamy dzialanie programu.
        if (!sprawdzLiczbe(liczbaString, l2.liczbaIsDouble)) {
            return 1;
        }

        if (l2.liczbaIsDouble) {
            l2.liczbaDouble = atof(liczbaString.c_str());
        } else {
            l2.liczbaInt = atoi(liczbaString.c_str());
        }

        //Sprawdzenie czy obie liczby sa tego samego typu, jesli nie to zamieniamy liczbe z Int na Double
        if (l1.liczbaIsDouble && !l2.liczbaIsDouble) {
            l2.liczbaDouble = (double) l2.liczbaInt;
        } else if (!l1.liczbaIsDouble && l2.liczbaIsDouble) {
            l1.liczbaDouble = (double) l1.liczbaInt;
        }

        if (l1.liczbaIsDouble || l2.liczbaIsDouble) {
            cout << "Liczby przed zamiana: " << endl;
            cout << "1. " << l1.liczbaDouble << endl;
            cout << "2. " << l2.liczbaDouble << endl;
            cout << endl;

            swap(l1.liczbaDouble, l2.liczbaDouble);

            cout << "Liczby po zamianie: " << endl;
            cout << "1. " << l1.liczbaDouble << endl;
            cout << "2. " << l2.liczbaDouble << endl;
            cout << endl;
        } else {
            cout << "Liczby przed zamiana: " << endl;
            cout << "1. " << l1.liczbaInt << endl;
            cout << "2. " << l2.liczbaInt << endl;
            cout << endl;

            swap(l1.liczbaInt, l2.liczbaInt);

            cout << "Liczby po zamianie: " << endl;
            cout << "1. " << l1.liczbaInt << endl;
            cout << "2. " << l2.liczbaInt << endl;
            cout << endl;
        }
    }
        //Sortowanie tablicy
    else if (argv[1] == string("sortRow")) {
        int wielkosc;
        cout << "Podaj wielkosc tablicy: ";
        cin >> wielkosc;

        bool tablicaIsDouble = false;
        double *tablicaDouble = new double[wielkosc];

        int *tablicaInt = new int[wielkosc];

        bool liczbaIsDouble = false;
        string liczbaString;

        for (int i = 0; i < wielkosc; i++) {
            pobierzLiczbe:
            cout << "Podaj wartosc dla indeksu " << i << " :";
            cin >> liczbaString;

            if (!sprawdzLiczbe(liczbaString, liczbaIsDouble)) {
                goto pobierzLiczbe;
            }
            //Jesli chociaz jedna liczba jest typu Double, to cala tablica musi byc typu Double.
            if (liczbaIsDouble) {
                tablicaIsDouble = true;
            }
            tablicaDouble[i] = atof(liczbaString.c_str());
        }

        //Jesli wprowadzone wartosci do tablicy nie sa typu Double to tworzymy tablice
        //typu Int i przypisujemy jej wartosci.
        if (!tablicaIsDouble) {
            for (int i = 0; i < wielkosc; i++) {
                tablicaInt[i] = (int) tablicaDouble[i];
            }
        }

        cout << "Tablica przed sortowaniem: ";
        for (int i = 0; i < wielkosc; i++) {
            if (tablicaIsDouble) {
                cout << tablicaDouble[i] << ", ";
            } else {
                cout << tablicaInt[i] << ", ";
            }
        }

        //Wykonanie sortowania
        if (tablicaIsDouble) {
            sortRow(tablicaDouble, wielkosc);
        } else {
            sortRow(tablicaInt, wielkosc);
        }

        cout << "\nTablica po sortowaniu: ";
        for (int i = 0; i < wielkosc; i++) {
            if (tablicaIsDouble) {
                cout << tablicaDouble[i] << ", ";
            } else {
                cout << tablicaInt[i] << ", ";
            }
        }
    }
        //Sortowanie wszystkich wierszy w macierzy
    else if (argv[1] == string("sortRowsInMatrix")) {
        Macierz a, wynik;

        a.wczytajMacierz();

        wynik.iloscWierszy = a.iloscWierszy;
        wynik.iloscKolumn = a.iloscKolumn;

        wynik.macierzIsDouble = a.macierzIsDouble;

        wynik.tworzenieMacierzy(wynik.macierzIsDouble);

        if (a.macierzIsDouble) {
            wynik.macierzDouble = sortRowsInMatrix(a.macierzDouble, a.iloscWierszy, a.iloscKolumn);
        } else {
            wynik.macierzInt = sortRowsInMatrix(a.macierzInt, a.iloscWierszy, a.iloscKolumn);
        }

        cout << "Macierz po posortowaniu: ";
        wynik.wyswietlMacierz(wynik.macierzIsDouble);

        //Usuwanie danych z pamieci
        a.usunMacierz(a.macierzIsDouble);
        wynik.usunMacierz(wynik.macierzIsDouble);
    } else {
        help();
    }

    return 0;
}

void help() {
    cout << "Dostepne parametry uruchamiania: " << endl;
    cout << "\taddMatrix - Dodawanie dwoch macierzy" << endl;
    cout << "\tsubtractMatrix - Odejmowanie dwoch macierzy" << endl;
    cout << "\tmultiplyMatrix - mnozenie dwoch macierzy" << endl;
    cout << "\tmultiplyByScalar - mnozenie przez skalar" << endl;
    cout << "\ttranspozeMatrix - transponowanie macierzy" << endl;
    cout << "\tpowerMatrix [potega] - potegowanie macierzy" << endl;
    cout << "\tdeterminantMatrix - wyznacznik macierzy" << endl;
    cout << "\tmatrixIsDiagonal - sprawdzanie czy macierz jest diagonalna" << endl;
    cout << "\tswap [liczba1] [liczba2]- zamiana dwoch wartosci miejscami" << endl;
    cout << "\tsortRow - sortowanie tablicy za pomoca sortowania babelkowego" << endl;
    cout << "\tsortRowsInMatrix - sortowanie wszystkich wierszy w macierzy" << endl;

}

//Sprawdzanie poprawnosci liczby i ustalanie czy jest to typ Double czy Int
bool sprawdzLiczbe(string liczbaString, bool &liczbaIsDouble) {
    int iloscKropekWLiczbie = 0;

    for (int i = 0; i < liczbaString.length(); i++) {
        //Jesli pierwszy znak w liczbie lub ostatni to znak kropki, to jest to niepoprawna liczba (np. .42 lib 42.).
        if (liczbaString[0] == '.' || liczbaString[liczbaString.length() - 1] == '.') {
            cout << "ERROR1: Wprowadzona wartosc nie jest poprawna liczba (" << liczbaString << ")!" << endl;
            return false;
        }

        //Jesli znak w liczbie to znak "-" i nie jest to pierwszy znak, to jest to niepoprawna liczba (np. 1-).
        if (liczbaString[i] == '-' && i != 0) {
            cout << "ERROR2: Wprowadzona wartosc nie jest poprawna liczba (" << liczbaString << ")!" << endl;
            return false;
        }

        if (!((int) liczbaString[i] >= 48 && (int) liczbaString[i] <= 57 || liczbaString[i] == '.' ||
              liczbaString[i] == '-' && i == 0)) {
            cout << "ERROR3: Wprowadzona wartosc nie jest poprawna liczba (" << liczbaString << ")!" << endl;
            return false;
        }

        //Jesli drugi znak w liczbie to krapka, a pierwszy to minus to liczba jest niepoprawna (np. -.42)
        if (i == 1 && liczbaString[1] == '.' && liczbaString[0] == '-') {
            cout << "ERROR4: Wprowadzona wartosc nie jest poprawna liczba (" << liczbaString << ")!" << endl;
            return false;
        }

        //Jesli uzytkownik wprowadzil liczbe ze znakiem . to oznacza, ze jest to liczba typu Double
        if ((int) liczbaString[i] == 46) {
            //Jesli wprowadzona liczba posiada juz kropke to oznacza to, ze uzytkownik wprowadzil
            //dwie kropki czyli jest to niepoprawna liczba
            if (iloscKropekWLiczbie != 0) {
                cout << "ERROR5: Wprowadzona wartosc nie jest poprawna liczba (" << liczbaString << ")!" << endl;
                return false;
            }

            iloscKropekWLiczbie++;
        }
    }

    if (iloscKropekWLiczbie == 1) {
        liczbaIsDouble = true;
    } else {
        liczbaIsDouble = false;
    }

    return true;
}