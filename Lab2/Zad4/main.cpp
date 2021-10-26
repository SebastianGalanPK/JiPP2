#include <iostream>

using namespace std;

int main() {
    //Zad1
    //Do napisania jest program wczytuje od użytkownika dwie liczby
    // naturalne a i b. Program ma wypisać na ekran wynik dzielenia a przez b,
    // a jeśli jest to niemożliwe to ma wypisać odpowiedni komunikat. Dzielenie
    // będzie odbywać się w zbiorze liczb naturalnych, dlatego wynikiem dzielenia nie
    // może być ułamek.
    int a,b;
    cout<<"Podaj naturalna liczbe a: ";
    cin>>a;
    cout<<"Podaj naturalna liczbe b: ";
    cin>>b;

    try{
        if(b==0){
            throw 1;
        }
        int wynik = a/b;
        if(abs(wynik - (float)a/b)>0){
            throw 2;
        }

        cout<<"Wynik: "<<wynik<<endl;
    }catch (int e){
        cout<<"ERROR: ";
        if(e==1){
            cout<<"Nie mozna dzielic przez 0!";
        }
        else if(e==2){
            cout<<"Wynik dzielenia "<<a<<" przez "<<b<<" nie jest liczba naturalna!";
        }
    }

    cout<<endl<<endl;

    //Zad2
    //Do napisania jest funkcja, która wczyta od użytkownika linijkę zawierającą
    // ciąg znaków. Program powinien następnie spróbować przekonwertować wprowadzony
    // tekst na liczbę typu int. W trakcie konwersji program może zwrócić dwa wyjątki:
    // Wprowadzony ciąg zawiera nieprawidłowe znaki oraz Wprowadzona liczba jest za duża.
    // Na sam koniec program powinien wypisać skonwertowaną liczbę na ekran.
    string liczbaString;
    string maxInt = "2147483648";

    try{
        cout<<"Podaj liczbe: ";
        cin>>liczbaString;

        for(int i=0;i<liczbaString.length();i++){
            if((int)liczbaString[i]<48 || (int)liczbaString[i]>57){
                throw 1;
            }
        }

        if(liczbaString.length()>maxInt.length() || atoi(liczbaString.c_str())>atoi(liczbaString.c_str())){
            throw 2;
        }


        int liczbaInt = atoi(liczbaString.c_str());
        cout<<"Wprowadzona liczna: "<<liczbaInt;
    }
    catch(int e){
        cout<<"ERROR: ";
        if(e==1){
            cout<<"Wprowadzony ciag nie zawiera tylko cyfr!";
        }
        else if(e==2){
            cout<<"Wprowadzony ciag jest za duzy!";
        }
    }

    return 0;
}
