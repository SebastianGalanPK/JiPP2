#include <iostream>
#include "../simpleCalc//include/calc.h"

using namespace std;

int Add(int a,int b){
    return (a+b);
}

int Subtract(int a,int b){
    return (a-b);
}
float Volume(int a, int b, int h, int H){
    float polePodstawy  = 0.5 * h * (a+b);
    return (polePodstawy * H);
}
void Help(){
    cout<<"Simple calculator"<<endl;
    cout<<"JiPP2 [nazwa dzialania]"<<endl<<endl;

    cout<<"Dzialania:"<<endl;
    cout<<"add [a] [b]"<<endl<<"\tDodawanie dwoch liczb ([a] i [b]) calkowitych."<<endl;
    cout<<"subtract [a] [b]"<<endl<<"\tOdejmowanie dwoch liczb ([a] i [b] calkowitych"<<endl;
    cout<<"volume [a] [b] [h] [H]"<<endl<<"\tOblicza objetosc graniastoslupa prostego o podstawie trapezu."<<endl;
    cout<<"\t\t[a] - Wartosc podstawy a trapezu."<<endl;
    cout<<"\t\t[b] - Wartosc podstawy b trapezu."<<endl;
    cout<<"\t\t[h] - Wysokosc trapezu."<<endl;
    cout<<"\t\t[H] - Wysokosc graniastoslupa prostego."<<endl;
    cout<<"help"<<endl<<"\tWyswietla informacje o dzialaniu programu.";
}
