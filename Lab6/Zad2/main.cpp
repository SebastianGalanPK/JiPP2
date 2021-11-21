#include <iostream>

using namespace std;

class Vector {
private:
    double x, y;

public:
    Vector() {};

    Vector(double x, double y) : x(x), y(y) {}

    void print() {
        cout << "X: " << x << " Y: " << y << endl;
    }

    double length() {
        return sqrt(x * x + y * y);
    }

    Vector operator+(const Vector &rhs) const {
        return {x + rhs.x, y + rhs.y};
    }

    Vector operator+=(const Vector &rhs) {
        this->x = this->x + rhs.x;
        this->y = this->y + rhs.y;
        return *this;
    }

    Vector operator-(Vector vector) {
        return {x - vector.x, y - vector.y};
    }

    Vector operator*(float skalar) {
        return {x * skalar, y * skalar};
    }

    bool operator==(Vector vector) {
        if (x == vector.x && y == vector.y) {
            return true;
        }
        return false;
    }

    Vector operator!() {
        return {-x, -y};
    }
};

class LiczbaUrojona {
private:
    float a;
    float b;

public:
    LiczbaUrojona(float a, float b) : a(a), b(b) {}

    void display() {
        if (b > 0) {
            cout << a << " + " << b << "i";
        }
        else if (b<0){
            cout << a << " " << b << "i";
        }
        else{
            cout<<a;
        }
        cout<<endl;
    }

    LiczbaUrojona operator+(LiczbaUrojona liczba){
        return {a+liczba.a, b+liczba.b};
    }
    LiczbaUrojona operator-(LiczbaUrojona liczba){
        return {a-liczba.a, b-liczba.b};
    }

    LiczbaUrojona operator*(LiczbaUrojona liczba){
        return {a*liczba.a, b*liczba.b};
    }
};

int main() {
    Vector v1(2, 5), v2(5, 10);
    cout<<"v1: ";
    v1.print();
    cout<<"v2: ";
    v2.print();


    //Dodawanie wektorow
    Vector v3 = v1 + v2;
    cout<<"v1+v2: ";
    v3.print();

    //Dodawanie jednego wektora do drugiego
    v3 += v2;
    cout<<"v3+=v2: ";
    v3.print();

    //Odejmowanie wektorow
    Vector v4 = v1 - v2;
    cout<<"v1-v2: ";
    v4.print();

    //Mnozenie wektora przez skalar
    Vector v5 = v1 * 2;
    cout<<"v1*2: ";
    v5.print();

    /*Vector v51 = 2*v1;
    cout<<"2*v1: ";
    v51.print();*/

    //Sprawdzanie czy wektory sa rowne
    Vector v6(2, 5);
    cout << "Wektory sa rowne: " << (v6 == v1) << endl;

    //Otrzymywanie wektora przeciwnego
    Vector v7 = !v1;
    cout<<"!v1: ";
    v7.print();

    cout<<"\n\n\n\n\n";

    LiczbaUrojona l1(2,5), l2(3,6);
    cout<<"l1: ";
    l1.display();
    cout<<"l2: ";
    l2.display();

    //Dodawanie liczb urojonych
    LiczbaUrojona l3 = l1 + l2;
    cout<<"l1+l2: ";
    l3.display();

    //Odejmowanie liczb urojonych
    LiczbaUrojona l4 = l2 - l1;
    cout<<"l2-l1: ";
    l4.display();


}
