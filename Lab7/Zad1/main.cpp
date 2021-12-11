#include <iostream>

using namespace std;

class Figure{
public:
    string nazwa;
    string kolor;
};

class Prostokat : public Figure{
public:
    int a, b;
    int pole(){
        return a*b;
    }

    int obwod(){
        return 2*a+2*b;
    }

    Prostokat::Prostokat(int a, int b){
        this->a = a;
        this->b = b;
    }

    void print(){
        cout<<"Nazwa figury: "<<nazwa<<endl;
        cout<<"Kolor: "<<kolor<<endl;

        cout<<"Wymiary: "<<endl;
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    }
};

class Kwadrat : public Figure{
public:
    int a;

    int pole(){
        return a*a;
    }

    int obwod(){
        return 4*a;
    }

    void print(){
        cout<<"Nazwa figury: "<<nazwa<<endl;
        cout<<"Kolor: "<<kolor<<endl;

        cout<<"Wymiary: "<<endl;
        cout<<"a: "<<a<<endl;
    }

    Kwadrat::Kwadrat(int a){
        this->a=a;
    }
};

int main() {

    Prostokat a(4,5);
    a.nazwa = "Prostokat";
    a.kolor = "Czerwony";
    a.print();
    cout<<"Pole: "<<a.pole()<<endl;
    cout<<"Obwod: "<<a.obwod()<<endl;

    cout<<endl<<endl;

    Kwadrat b(4);
    b.nazwa = "Kwadrat";
    b.kolor = "Zielony";
    b.print();
    cout<<"Pole: "<<b.pole()<<endl;
    cout<<"Obwod: "<<b.obwod()<<endl;

    return 0;
}
