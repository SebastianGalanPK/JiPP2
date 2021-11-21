#include <iostream>
#include "Node.h"

using namespace std;

int main() {
    Node n1(25,52);
    Node n2(11,42);

    double dystans = pointsDistance(n1,n2);
    n1.display();
    n2.display();

    cout<<"Odleglosc pomiedzy punktami: ";
    cout<<dystans;

    return 0;
}
