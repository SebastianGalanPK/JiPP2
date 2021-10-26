#include <iostream>

using namespace std;

struct samochod{
    string marka;
    string model;
    int rokProdukcji;
    string kolor;
    bool uszkodzony;
};

int najstarszySamochod(samochod *, int);
void sumaSamochodow(samochod *, int);


int main() {
    samochod samochody[] = {{"Ford","Mustand", 2016, "czerwony"},
                            {"BMW","i8", 2016, "bialy"},
                            {"BMW","M8", 2020, "niebieski"},
                            {"Audi","A8", 2005, "bialy"}};

    cout<<"Numer \t Marka \t Model \t Rok Produkcji \t" << "Kolor"<<endl;
    for(int i=0;i<4;i++){
        cout<<i+1<<". \t"<<samochody[i].marka<<" \t "<<samochody[i].model<<" \t "<<samochody[i].rokProdukcji<<" \t "<<samochody[i].kolor<<endl;
    }

    sumaSamochodow(samochody, 4);


    int indexNajstarszegoSamochodu = najstarszySamochod(samochody, 4);
    cout<<endl<<endl<<"Najstarszy samochod to "<<samochody[indexNajstarszegoSamochodu].marka<<" "<<samochody[indexNajstarszegoSamochodu].model<<" z roku: "<<samochody[indexNajstarszegoSamochodu].rokProdukcji<<endl;

    return 0;
}

void sumaSamochodow(samochod *samochody, int iloscElementow){
    string marka;

    string zliczoneMarki[4];

    for(int i=0;i<iloscElementow;i++){
        Zlicz:
        int ilosc =0;
        marka = samochody[i].marka;
        for(int x=0;x<iloscElementow;x++){
            if(marka==zliczoneMarki[x]){
                i++;
                goto Zlicz;
            }
        }

        for(int y=0;y<iloscElementow;y++){
            if(samochody[y].marka==marka){
                ilosc++;
            }
        }

        zliczoneMarki[i] = marka;
        cout<<endl<<"Marka: "<<samochody[i].marka<<" ilosc: "<<ilosc;
    }
}

int najstarszySamochod(samochod *samochod, int iloscElementow){
    int index, rokProdukcji;

    index = 0;
    rokProdukcji = samochod[0].rokProdukcji;

    for(int i=0;i<iloscElementow;i++){
        if(samochod[i].rokProdukcji<rokProdukcji){
            rokProdukcji = samochod[i].rokProdukcji;
            index = i;
        }
    }

    return index;
}
