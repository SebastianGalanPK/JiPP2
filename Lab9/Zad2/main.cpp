#include <iostream>
#include <list>

using namespace std;

class Utwor{
private:
    string autor;
    string tytul;
    float dlugosc;

public:
    Utwor(string autor, string tytul, float dlugosc){
        this->autor=autor;
        this->tytul=tytul;
        this->dlugosc=dlugosc;
    }

    void print(){
        cout<<autor<<" - "<<tytul<<" ("<<dlugosc<<")"<<endl;
    }

    string getAutor(){
        return autor;
    }

    string getTytul(){
        return tytul;
    }
};

class Lista{
    list<Utwor> l1;

public:
    void dodajUtwor(Utwor *utwor){
        l1.push_back(*utwor);
    }

    void usunUtwor(Utwor utwor){
        list<Utwor>::iterator x;
        x=l1.begin();

        for(Utwor u:l1){
            if(u.getAutor()!=utwor.getAutor() && u.getTytul()!=utwor.getTytul()){
                x++;
                break;
            }
        }

        l1.erase(x);
    }

    void print(){
        for(Utwor u:l1){
            u.print();
        }
    }

    void odtworzListe(){
        cout<<"Odtworzenie listy!"<<endl;
        cout<<"Utwory na liscie: "<<endl;
        print();
    }
};

int main() {

    Utwor u1("Autor1", "Tytul1", 3.14);
    Utwor u2("Autor2", "Tytul2", 4.21);
    Utwor u3("Autor3", "Tytul3", 12.5);
    Utwor u4("Autor4", "Tytul4", 3.52);
    Utwor u5("Autor5", "Tytul5", 2.58);

    //Tworzenie listy odtwarzania
    Lista l1;

    //Dodanie do listy utworów
    l1.dodajUtwor(&u1);
    l1.dodajUtwor(&u2);
    l1.dodajUtwor(&u3);
    l1.dodajUtwor(&u4);
    l1.dodajUtwor(&u5);

    //Wyswietlenie listy
    cout<<"Lista przed usunieciem utworu: "<<endl;
    l1.print();

    //Usuniecie utworu z listy
    l1.usunUtwor(u2);

    //Wyswietlanie listy
    cout<<"Lista po usunieciu utworu: "<<endl;
    l1.print();

    cout<<endl<<endl;

    //Odtworzenie listy
    l1.odtworzListe();

    return 0;
}
