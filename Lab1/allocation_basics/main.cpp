#include <iostream>

using namespace std;

void ShowHelp();

int main(int argc, char *argv[]){
    float wynik = 0;

    if(argv[1]==string("add")){
        if(argc!=4){
            cout<<"Niepoprawna ilosc parametrow! "<<endl<<endl;
            ShowHelp();
            return 1;
        }

        int liczba1 = atof(argv[2]);
        int liczba2 = atof(argv[3]);

        wynik = liczba1+liczba2;
        cout << "Wynik dzialania " << string(argv[1]) << " : " << wynik << endl;
    }
    else if(argv[1]==string("subtract")){
        if(argc!=4){
            cout<<"Niepoprawna ilosc parametrow! "<<endl<<endl;
            ShowHelp();
            return 1;
        }

        int liczba1 = atof(argv[2]);
        int liczba2 = atof(argv[3]);

        wynik = liczba1 - liczba2;
        cout << "Wynik dzialania " << string(argv[1]) << " : " << wynik << endl;
    }
    else if(argv[1]==string("volume")){
        if(argc!=6){
            cout<<"Niepoprawna ilosc parametrow! "<<endl<<endl;
            ShowHelp();
            return 1;
        }

        int a = atof(argv[2]);
        int b = atof(argv[3]);
        int h = atof(argv[4]);
        int H = atof(argv[5]);

        float polePodstawy  = 0.5 * h * (a+b);
        wynik = polePodstawy * H;
        cout << "Wynik dzialania " << string(argv[1]) << " : " << wynik << endl;
    }
    else if(argv[1]==string("help")){
        ShowHelp();
    }
}

void ShowHelp(){
    cout<<"Simple calculator"<<endl;
    cout<<"JiPP2 [nazwa dzialania]"<<endl<<endl;

    cout<<"Dzialania:"<<endl;
    cout<<"add [a] [b]"<<endl<<"\tDodawanie dwoch liczb ([a] i [b]) calkowitych."<<endl;
    cout<<"subtract [a] [b]"<<endl<<"\tOdejmowanie dwoch liczb ([a] i [b] calkowitych"<<endl;
    cout<<"volume [a] [b] [h] [H]"<<endl<<"\tOblicza objetosc graniastosłupa prostego o podstawie trapezu."<<endl;
    cout<<"\t\t[a] - Wartosc podstawy a trapezu."<<endl;
    cout<<"\t\t[b] - Wartosc podstawy b trapezu."<<endl;
    cout<<"\t\t[h] - Wysokosc trapezu."<<endl;
    cout<<"\t\t[H] - Wysokosc graniastoslupa prostego."<<endl;
    cout<<"help"<<endl<<"\tWyswietla informacje o dzialaniu programu.";
}
