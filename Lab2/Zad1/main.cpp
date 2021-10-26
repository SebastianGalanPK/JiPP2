#include <iostream>

using namespace std;

int pole(int a);
int pole(int a,int b);
float pole(int a,int b,int h);
float pole(float e, float f);

int main() {
    //Zad1
    //Napisz funkcję, która będzie liczyła pole figury. Pole będzie zależne
    // od ilości oraz typu argumentów.
    cout<<"Pole kwadratu o boku 5: "<<pole(5)<<endl;
    cout<<"Pole prostokata o boku 5 i 2: "<<pole(5,2)<<endl;
    cout<<"Pole trapezu o bokach 5 i 4 i wysokosci 3: "<<pole(5,4,3)<<endl;
    cout<<"Pole rombu o przekatnych 5 i 4: "<<pole(5.0f,4.0f);

    return 1;
}

int pole(int a){
    return (a*a);
}

int pole(int a,int b){
    return (a*b);
}

float pole(int a,int b, int h){
    return (float)((a+b)*h)/2;
}

float pole(float e, float f){
    return (float)(e*f)/2;
}