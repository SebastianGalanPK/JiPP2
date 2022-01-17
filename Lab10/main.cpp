#include <iostream>

using namespace std;

template <typename T>
T min2(T a, T b){
    return (a < b)? a: b;
}

template <typename T>
T max2(T a, T b){
    return (a>b)? a: b;
}

template <typename T>
void printArray(T *a, int wielkosc){
    cout<<"Tablica: "<<endl;
    for(int i=0;i<wielkosc;i++){
        cout<<"1. "<<a[i]<<endl;
    }
}

template <typename T>
void printMatrix(T **a, int x, int y){
    cout<<"Matrix: "<<endl;

    for(int i=0;i<x;i++){
        for(int i=0;i<y;i++){
            cout<<"1. "<<a[x][y]<<endl;
        }
    }
}

int main() {
    int a=5,b=7;

    int tablica[] = {1,6,62,1,63,2,5,6};

    int matrix[3][3] = {{1,2,3},{4,7,1},{6,7,9}};

    cout<<"Najmniejsza liczba z: "<<a<<", "<<b<<" to: "<<min2<int>(a,b)<<endl;
    cout<<"Najwieksza liczba z: "<<a<<", "<<b<<" to: "<<max2<int>(a,b)<<endl;

    printArray<int>(tablica, 8);
    printMatrix<int>(matrix, 3, 3);


    return 0;
}


