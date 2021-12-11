#include <iostream>

using namespace std;

class Note{
    string title;

public:
    string getTitle(){
        return title;
    }
    void setTitle(string value){
        title=value;
    }
};

class TextNote{
    string content;

public:
    string getContent(){
        return content;
    }
    void setContent(string value){
        content=value;
    }
};

class ListNote{
    string content;

public:
    string getContent(){
        return content;
    }
    void setContent(string value){
        content=value;
    }
};

class NoteDirector{
    ListNote noteList;

public:

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
