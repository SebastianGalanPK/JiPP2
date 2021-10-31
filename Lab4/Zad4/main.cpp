#include <iostream>

using namespace std;

class Klasa{
public:
    int *tablica = new int[1024];

    Klasa();
    ~Klasa();

    void pause(){
        system("PAUSE");
    }
};

Klasa::Klasa(){
    cout<<"Konstruktor nie zostal wywolany"<<endl;
}

Klasa::~Klasa(){
    cout<<"Wywolanie dekonstruktora."<<endl;
    delete [] tablica;
}

int main() {
    Klasa k1;
    k1.pause();

    return 0;
}
