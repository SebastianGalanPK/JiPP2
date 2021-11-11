//
// Created by Sebastian on 09.11.2021.
//

#include <iostream>

using namespace std;

class Pojazd{
private:
    string numerRejestracyjny;
    string nazwa;
    int iloscMiejsc;

    string * pasazerowie;
    string marka, typ;

public:
    Pojazd(string numerRejestracyjny, string nazwa, int iloscMiejsc, string marka, string typ){
        this->pasazerowie = new string[iloscMiejsc];
        this->numerRejestracyjny = numerRejestracyjny;
        this->nazwa=nazwa;
        this->iloscMiejsc = iloscMiejsc;
        this->marka=marka;
        this->typ=typ;

        for(int i=0;i<iloscMiejsc;i++){
            this->pasazerowie[i]="puste";
        }
    }

    Pojazd(Pojazd &pojazd){
        nazwa = pojazd.getNazwa();
        numerRejestracyjny = pojazd.getNumerRejestracyjny();
        iloscMiejsc = pojazd.iloscMiejsc;
        marka = pojazd.marka;
        typ = pojazd.typ;
        pasazerowie = new string[pojazd.iloscMiejsc];

        for(int i=0;i<iloscMiejsc;i++){
            pasazerowie[i]=pojazd.pasazerowie[i];
        }

    }

    void wypiszDane(){
        cout<<"Numer rejestracyjny: "<<numerRejestracyjny<<endl;
        cout<<"Nazwa: "<<nazwa<<endl;
        cout<<"Ilosc miejsc: "<<iloscMiejsc<<endl;
        cout<<"Marka: "<<marka<<endl;
        cout<<"Typ: "<<typ<<endl;

        cout<<"Pasazerowie: "<<endl;
        for(int i=0;i<iloscMiejsc;i++){
            cout<<i+1<<". "<<pasazerowie[i]<<endl;
        }
    }

    void ustawPasazera(int numerMiejsca, string imieNazwisko){
        pasazerowie[numerMiejsca-1]=imieNazwisko;
    }

    string getNumerRejestracyjny(){
        return numerRejestracyjny;
    }
    void setNumerRejestracyjny(string value){
        numerRejestracyjny = value;
    }

    string getNazwa(){
        return nazwa;
    }
    void setNazwa(string value){
        nazwa = value;
    }

    string getMarka(){
        return marka;
    }

    string getTyp(){
        return typ;
    }

};

int main(){
    Pojazd p1("WFW2421", "WDWD", 4, "Ford", "Kombi");

    p1.wypiszDane();
    p1.ustawPasazera(1,"Adam Adam");
    p1.wypiszDane();

    Pojazd p2 = p1;
    p2.setNumerRejestracyjny("SSSSEE2221");
    p2.wypiszDane();

    return 0;
}


