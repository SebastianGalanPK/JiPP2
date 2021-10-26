#include <iostream>

using namespace std;

float srednia(int *a, int *b);
void sortowanie(int *a,int *b,int *c, int *d, int *e);
void wpisanie(int x, int *w);

int main() {
    //Zad 1
    //Do napisania jest program pobierający 2 liczby oraz ustawi wskaźniki
    //na ich adresach, a także obliczy ich średnią. Należy wykorzystać wskaźniki.
    int a,b;
    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;

    cout<<"Srednia z liczby "<<a<<" i "<<b<<" to "<<srednia(&a,&b)<<endl<<endl;

    //Zad 2
    //Do napisania program gdzie wczytamy i wypiszemy na ekran elementy
    //tablicy większe od 0 (należy użyć wskaźników).
    int tablica[5];
    for(int i=0;i<5;i++){
        cout<<"Podaj wartosc tablicy dla indeksu "<<i<<" : ";
        cin>>tablica[i];
    }

    cout<<endl<<endl<<"Wartosci w tablicy: "<<endl;
    int *wsk = &tablica[0];
    for(int i=0;i<5;i++){
        cout<<*wsk<<" ";
        wsk++;
    }

    cout<<endl<<endl<<"Liczby w tablicy wieksze od 0"<<endl;
    wsk = &tablica[0];
    for(int i=0;i<5;i++){
        if(*wsk>0){
            cout<<*wsk<<" ";
        }
        wsk++;
    }

    //Zad3
    //Do napisania jest funkcja do sortowania liczb, które są zapisane
    //w zmiennych w rosnącej kolejności. Należy użyć wskaźników.
    int l1 = 24;
    int l2 = 12;
    int l3 = 152;
    int l4 = -5;
    int l5 = 242;

    //Zad4
    //Proszę stworzyć funkcję, której argumentami będą liczba
    //całkowita x oraz intowy wskaźnik w. Powinna ona wpisywać
    //wartość x do zmiennej wskazywanej przez wskaźnik.

    int x = 15;
    int *w = &x;


    wpisanie(65,w);
    cout<<endl<<endl<<"Wartosc zmiennej wskazywanej przez wskaznik: "<<x;

    return 0;
}

float srednia(int *a, int *b){
    return (float)(*a+*b)/2;
}

void wpisanie(int x, int *w){
    *w = x;
}

void sortowanie(int *a,int *b,int *c, int *d, int *e){

}