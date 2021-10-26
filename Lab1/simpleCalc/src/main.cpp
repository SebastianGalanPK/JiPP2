#include <iostream>
#include "../simpleCalc//include/calc.h"

using namespace std;

int main(int argc, char *argv[]) {
    if(argv[1]==string("add")){
        if(argc!=4){
            cout<<"Niepoprawna ilosc parametrow! "<<endl<<endl;
            Help();
            return 1;
        }

        int wynik = Add(atof(argv[2]), atof(argv[3]));
        cout << "Wynik dzialania " << string(argv[1]) << " : " << wynik << endl;
    }
    else if(argv[1]==string("subtract")){
        if(argc!=4) {
            cout << "Niepoprawna ilosc parametrow! " << endl << endl;
            Help();
            return 1;
        }

        int wynik = Subtract(atof(argv[2]),atof(argv[3]));
        cout << "Wynik dzialania " << string(argv[1]) << " : " << wynik << endl;
    }
    else if(argv[1]==string("volume")){
        if(argc!=6){
            cout<<"Niepoprawna ilosc parametrow! "<<endl<<endl;
            Help();
            return 1;
        }

        float wynik = Volume(atof(argv[2]),atof(argv[3]),atof(argv[4]),atof(argv[5]));
        cout << "Wynik dzialania " << string(argv[1]) << " : " << wynik << endl;
    }
    else if(argv[1]==string("help")){
        Help();
    }

    return 0;
}
