#include <iostream>

using namespace std;

int losowaLiczba(int a,int b);
int najwiekszaLiczba(int tab[], int wielkoscTablicy);
void odwrocTablice(int tab[], int wielkoscTablicy);

int main() {
    srand((time(NULL)));

    //Zad1
    //Napisz funkcję zwracającą liczbę losową z przedziału <a, b>, gdzie a i b
    // to argumenty tej funkcji
    cout<<"Losowa liczba z przedzialu <4,76>: "<<losowaLiczba(4,76)<<endl;
    cout<<"Losowa liczba z przedzialu <1,6>: "<<losowaLiczba(1,6)<<endl;
    cout<<"Losowa liczba z przedzialu <124,4522>: "<<losowaLiczba(124,4522)<<endl<<endl;

    //Zad2
    //Napisz funkcję, która zwraca największą wartość przechowywaną w tablicy
    // jednowymiarowej. Przetestuj ją w prostym programie (użyj tablicy alokowanej
    // dynamicznie, wypełnionej liczbami losowymi z przedziału <1, 100>).
    int wielkoscTablicy = 10;
    int * tablica = new int[wielkoscTablicy];

    for(int i=0;i<10;i++){
        tablica[i] = losowaLiczba(0,100);
    }
    cout<<"Najwieksza wartosc w tablicy to: "<< najwiekszaLiczba(tablica, wielkoscTablicy)<<endl<<endl;

    //Zad3
    //Napisz funkcję, która zmienia kolejność elementów tablicy (odwraca tablicę),
    // podanej do funkcji jako argument.
    cout<<"Tablica przed odwroceniem: "<<endl;
    for(int i=0;i<10;i++){
        cout<<tablica[i]<<" ";
    }
    cout<<endl;

    odwrocTablice(tablica, wielkoscTablicy);

    cout<<"Tablica po odwroceniu: "<<endl;
    for(int i=0;i<10;i++){
        cout<<tablica[i]<<" ";
    }

    delete [] tablica;

    return 1;
}

int losowaLiczba(int a, int b){
    int losowaLiczba = a+rand()%(b-a+1);
    return losowaLiczba;
}

int najwiekszaLiczba(int tab[], int wielkoscTablicy){
    int najwiekszaLiczba = tab[0];

    for(int i=0;i<wielkoscTablicy;i++){
        if(tab[i]>najwiekszaLiczba){
            najwiekszaLiczba=tab[i];
        }
    }

    return najwiekszaLiczba;
}

void odwrocTablice(int tab[], int wielkoscTablicy){
    int a;
    for(int i=0;i<wielkoscTablicy/2;i++){
        a = tab[i];
        tab[i]=tab[wielkoscTablicy-i-1];
        tab[wielkoscTablicy-i-1]=a;
    }
}
