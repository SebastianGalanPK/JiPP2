#include <iostream>
#include "math.h"

using namespace std;

class Punkt {
public:
    int x, y;

    Punkt();

    void odlegloscOdPunktu(int x, int y) {
        float odleglosc = sqrt(pow((this->x - x), 2) + pow(this->y - y, 2));
        cout << "Odleglosc punktu P1(" << this->x << ", " << this->y << ") od punktu P2(" << x << ", " << y
             << ") wynosi: " << odleglosc << endl;
    }

    void wyswietlPunkt() {
        cout << "(" << x << ", " << y << ")";
    }
};

Punkt::Punkt() {
    cout << "Podaj x: ";
    cin >> x;
    cout << "Podaj y: ";
    cin >> y;

    cout << "Punkt (" << x << ", " << y << ") zostal stworzony! " << endl;
};

class Figura {
public:
    int iloscWierzcholkow;

    Punkt *tablicaWierzcholkow;

    Figura();
};

Figura::Figura() {
    cout << "Podaj ilosc wierzcholkow: ";
    cin >> iloscWierzcholkow;

    tablicaWierzcholkow = new Punkt[iloscWierzcholkow];

    cout << "Figura posiada wierzcholki w punkcie: "<<endl;

    for (int i = 0; i < iloscWierzcholkow; i++) {
        cout << (i + 1) << ". ";
        tablicaWierzcholkow[i].wyswietlPunkt();
        cout<<endl;
    }
}

int main() {
    Punkt p1;

    p1.odlegloscOdPunktu(10, 1);

    Figura f1;

    return 0;
}
