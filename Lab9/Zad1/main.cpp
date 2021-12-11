#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string text;
    cout<<"Podaj text: ";
    getline(cin, text);

    cout<<"Wprowadzony tekst: "<<text;

    vector<char> textChar;

    for(char l:text){
        textChar.push_back(l);
    }

    cout<<endl;

    vector<char>::iterator x;

    //Zwiekszanie liter
    for(x=textChar.begin();x!=textChar.end();x++){
        *x = toupper((*x));
    }

    cout<<"Po zwiekszeniu liter: ";
    for(auto l:textChar){
        cout<<l;
    }


    return 0;
}
