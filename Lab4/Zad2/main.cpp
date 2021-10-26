#include <iostream>
#include "math.h"

using namespace std;

class Prostopadloscian {
public:
    int a, b, c;

    int pole() {
        return 2 * a * b + 2 * a * c + 2 * b * c;
    }
};

class Kula {
public:
    int r;

    float objetosc() {
        return 4 / 3 * atan(1) * 4 * pow(r, 3);
    }
};

class FunkcjaKwadratowa {
public:
    int a, b, c;

    void pobierzDane(){
        cout<<"Podaj a: ";
        cin>>a;
        cout<<"Podaj b: ";
        cin>>b;
        cout<<"Podaj c: ";
        cin>>c;
    }
    void wyswietlWzor(){
        cout<<"f(x) = "<<a<<"x^2 + "<<b<<"x + "<<c<<endl;
    }
};

class Student{
public:
    string imie;
    string nazwisko;
    int numerAlbumu, liczbaPytan, poprawneOdpowiedzi;

    void pobierzDane(){
        cout<<"Podaj imie studenta: ";
        cin>>imie;
        cout<<"Podaj nazwisko studenta: ";
        cin>>nazwisko;
        cout<<"Podaj numer albumu studenta: ";
        cin>>numerAlbumu;
        cout<<"Podaj liczbe pytan: ";
        cin>>liczbaPytan;
        cout<<"Podaj liczbe poprawnych odpowiedzi: ";
        cin>>poprawneOdpowiedzi;
    }

    void wyswietlProcentPoprawnychOdpowiedzi(){
        float procent = (float)poprawneOdpowiedzi/liczbaPytan * 100;

        cout<<"Student "<<imie<<" "<<nazwisko<<" : "<<procent<<"%"<<endl;
    }
};

int main() {
    Prostopadloscian p1;

    p1.a = 2;
    p1.b = 3;
    p1.c = 4;

    cout << "Pole prostopadloscianu o wymiarach " << p1.a << "x" << p1.b << "x" << p1.c << " wynosi: " << p1.pole()
         << endl;

    Kula k1;
    k1.r = 4;

    cout << "Objetosc kuli o promieniu " << k1.r << " wynosi: " << k1.objetosc() << endl;

    FunkcjaKwadratowa f1;

    f1.pobierzDane();
    f1.wyswietlWzor();

    Student s1;
    s1.pobierzDane();
    s1.wyswietlProcentPoprawnychOdpowiedzi();

    return 0;
}

