//
// Created by Sebastian on 21.10.2021.
//

#include <iostream>
#include "../include/matrix.h"

using namespace std;

int **macierzWynikInt;
double **macierzWynikDouble;

int **addMatrix(int **macierzA, int **macierzB, int iloscWierszy, int iloscKolumn) {
    tworzenieWynikowejMacierzy(iloscWierszy, iloscKolumn);

    for (int x = 0; x < iloscWierszy; x++) {
        for (int y = 0; y < iloscKolumn; y++) {
            macierzWynikInt[x][y] = macierzA[x][y] + macierzB[x][y];
        }
        cout << endl;
    }

    return macierzWynikInt;
}

double **addMatrix(double **macierzA, double **macierzB, int iloscWierszy, int iloscKolumn) {
    tworzenieWynikowejMacierzy(iloscWierszy, iloscKolumn, "double");

    for (int x = 0; x < iloscWierszy; x++) {
        for (int y = 0; y < iloscKolumn; y++) {
            macierzWynikDouble[x][y] = macierzA[x][y] + macierzB[x][y];
        }
        cout << endl;
    }

    return macierzWynikDouble;
}

int **subtractMatrix(int **macierzA, int **macierzB, int iloscWierszy, int iloscKolumn) {
    tworzenieWynikowejMacierzy(iloscWierszy, iloscKolumn);

    for (int x = 0; x < iloscWierszy; x++) {
        for (int y = 0; y < iloscKolumn; y++) {
            macierzWynikInt[x][y] = macierzA[x][y] - macierzB[x][y];
        }
        cout << endl;
    }

    return macierzWynikInt;
}

double **subtractMatrix(double **macierzA, double **macierzB, int iloscWierszy, int iloscKolumn) {
    tworzenieWynikowejMacierzy(iloscWierszy, iloscKolumn, "double");

    for (int x = 0; x < iloscWierszy; x++) {
        for (int y = 0; y < iloscKolumn; y++) {
            macierzWynikDouble[x][y] = macierzA[x][y] - macierzB[x][y];
        }
        cout << endl;
    }

    return macierzWynikDouble;
}

int **multiplyMatrix(int **macierzA, int **macierzB, int macierzA_iloscWierszy, int macierzA_iloscKolumn,
                     int macierzB_iloscKolumn) {
    tworzenieWynikowejMacierzy(macierzA_iloscWierszy, macierzB_iloscKolumn);
    for (int i = 0; i < macierzA_iloscWierszy; i++) {
        for (int j = 0; j < macierzB_iloscKolumn; j++) {
            int suma = 0;
            for (int k = 0; k < macierzA_iloscKolumn; k++) {
                suma += macierzA[i][k] * macierzB[k][j];
            }
            macierzWynikInt[i][j] = suma;
        }
    }

    return macierzWynikInt;
}

double **multiplyMatrix(double **macierzA, double **macierzB, int macierzA_iloscWierszy, int macierzA_iloscKolumn,
                        int macierzB_iloscKolumn) {
    tworzenieWynikowejMacierzy(macierzA_iloscWierszy, macierzB_iloscKolumn, "double");

    for (int i = 0; i < macierzA_iloscWierszy; i++) {
        for (int j = 0; j < macierzB_iloscKolumn; j++) {
            double suma = 0;
            for (int k = 0; k < macierzA_iloscKolumn; k++) {
                suma += macierzA[i][k] * macierzB[k][j];
            }
            macierzWynikDouble[i][j] = suma;
        }
    }

    return macierzWynikDouble;
}

int **multiplyByScalar(int **macierz, int iloscWierszy, int iloscKolumn, int skalar) {
    tworzenieWynikowejMacierzy(iloscWierszy, iloscKolumn);

    for (int x = 0; x < iloscWierszy; x++) {
        for (int y = 0; y < iloscKolumn; y++) {
            macierzWynikInt[x][y] = macierz[x][y] * skalar;
        }
        cout << endl;
    }

    return macierzWynikInt;
}

double **multiplyByScalar(double **macierz, int iloscWierszy, int iloscKolumn, double skalar) {
    tworzenieWynikowejMacierzy(iloscWierszy, iloscKolumn, "double");

    for (int x = 0; x < iloscWierszy; x++) {
        for (int y = 0; y < iloscKolumn; y++) {
            macierzWynikDouble[x][y] = macierz[x][y] * skalar;
        }
        cout << endl;
    }

    return macierzWynikDouble;
}

int **transpozeMatrix(int **macierz, int iloscWierszy, int iloscKolumn) {
    tworzenieWynikowejMacierzy(iloscKolumn, iloscWierszy);

    for (int x = 0; x < iloscKolumn; x++) {
        for (int y = 0; y < iloscWierszy; y++) {
            macierzWynikInt[x][y] = macierz[y][x];
        }
    }

    return macierzWynikInt;
}

double **transpozeMatrix(double **macierz, int iloscWierszy, int iloscKolumn) {
    tworzenieWynikowejMacierzy(iloscKolumn, iloscWierszy, "double");

    for (int x = 0; x < iloscKolumn; x++) {
        for (int y = 0; y < iloscWierszy; y++) {
            macierzWynikDouble[x][y] = macierz[y][x];
        }
    }

    return macierzWynikDouble;
}

int **powerMatrix(int **macierz, int iloscWierszy, int iloscKolumn, unsigned potega) {
    tworzenieWynikowejMacierzy(iloscWierszy, iloscKolumn);

    for (int x = 0; x < iloscWierszy; x++) {
        for (int y = 0; y < iloscKolumn; y++) {
            macierzWynikInt[x][y] = pow(macierz[x][y], potega);
        }
    }

    return macierzWynikInt;
}

double **powerMatrix(double **macierz, int iloscWierszy, int iloscKolumn, unsigned potega) {
    tworzenieWynikowejMacierzy(iloscWierszy, iloscKolumn, "double");

    for (int x = 0; x < iloscWierszy; x++) {
        for (int y = 0; y < iloscKolumn; y++) {
            macierzWynikDouble[x][y] = pow(macierz[x][y], potega);
        }
    }

    return macierzWynikDouble;
}

int determinantMatrix(int **macierz, int iloscWierszy, int iloscKolumn) {
    int wyznacznik = 0;

    //Tworzenie macierzy pomocniczej
    int **macierzPomocnicza = new int *[iloscWierszy-1];
    for (int i = 0; i < iloscWierszy; i++) {
        macierzPomocnicza[i] = new int[iloscKolumn-1];
    }

    if (iloscWierszy == 1 && iloscKolumn == 1) {
        return macierz[0][0];
    }
    if (iloscWierszy == 2 && iloscKolumn == 2) {
        return ((macierz[0][0] * macierz[1][1]) - (macierz[1][0] * macierz[0][1]));
    } else {
        for (int i = 0; i < iloscWierszy; i++) {
            int x = 0;
            for (int j = 1; j < iloscWierszy; j++) {
                int y = 0;
                for (int k = 0; k < iloscWierszy; k++) {
                    if (k != i) {
                        macierzPomocnicza[x][y] = macierz[j][k];
                        y++;
                    }
                }
                x++;
            }
            wyznacznik += (pow(-1, i) * macierz[0][i] * determinantMatrix(macierzPomocnicza, iloscWierszy - 1, iloscKolumn - 1));
        }
    }
    return wyznacznik;
}

double determinantMatrix(double **macierz, int iloscWierszy, int iloscKolumn) {
    double wyznacznik = 0;

    //Tworzenie macierzy pomocniczej
    double **macierzPomocnicza = new double *[iloscWierszy-1];
    for (int i = 0; i < iloscWierszy; i++) {
        macierzPomocnicza[i] = new double[iloscKolumn-1];
    }

    if (iloscWierszy == 1 && iloscKolumn == 1) {
        return macierz[0][0];
    }
    if (iloscWierszy == 2 && iloscKolumn == 2) {
        return ((macierz[0][0] * macierz[1][1]) - (macierz[1][0] * macierz[0][1]));
    } else {
        for (int i = 0; i < iloscWierszy; i++) {
            int x = 0;
            for (int j = 1; j < iloscWierszy; j++) {
                int y = 0;
                for (int k = 0; k < iloscWierszy; k++) {
                    if (k != i) {
                        macierzPomocnicza[x][y] = macierz[j][k];
                        y++;
                    }
                }
                x++;
            }
            wyznacznik += (pow(-1, i) * macierz[0][i] * determinantMatrix(macierzPomocnicza, iloscWierszy - 1, iloscKolumn - 1));
        }
    }
    return wyznacznik;
}

bool matrixIsDiagonal(int **macierz, int iloscWierszy, int iloscKolumn) {
    for (int x = 0; x < iloscWierszy; x++) {
        for (int y = 0; y < iloscKolumn; y++) {
            if (macierz[x][y] != 0 && x != y) {
                return false;
            }
        }
    }

    return true;
}

bool matrixIsDiagonal(double **macierz, int iloscWierszy, int iloscKolumn) {
    for (int x = 0; x < iloscWierszy; x++) {
        for (int y = 0; y < iloscKolumn; y++) {
            if (macierz[x][y] != 0 && x != y) {
                return false;
            }
        }
    }

    return true;
}

void swap(int &a, int &b) {
    int aKopia = a;
    a = b;
    b = a;
}

void swap(double &a, double &b) {
    double aKopia = a;
    a = b;
    b = a;
}

void sortRow(int *tablica, int iloscKolumn) {
    for (int i = 0; i < iloscKolumn; i++) {
        for (int j = 1; j < iloscKolumn - i; j++) {
            if (tablica[j - 1] > tablica[j]) {
                int kopia = tablica[j - 1];
                tablica[j - 1] = tablica[j];
                tablica[j] = kopia;
            }
        }
    }
}

void sortRow(double *tablica, int iloscKolumn) {
    for (int i = 0; i < iloscKolumn; i++) {
        for (int j = 1; j < iloscKolumn - i; j++) {
            if (tablica[j - 1] > tablica[j]) {
                double kopia = tablica[j - 1];
                tablica[j - 1] = tablica[j];
                tablica[j] = kopia;
            }
        }
    }
}

int **sortRowsInMatrix(int **macierz, int iloscWierszy, int iloscKolumn) {
    for (int i = 0; i < iloscWierszy; i++) {
        sortRow(macierz[i], iloscKolumn);
    }

    return macierz;
}

double **sortRowsInMatrix(double **macierz, int iloscWierszy, int iloscKolumn) {
    for (int i = 0; i < iloscWierszy; i++) {
        sortRow(macierz[i], iloscKolumn);
    }

    return macierz;
}

//Tworzenie wynikowej macierzy w zaleznosci od wielkosci i typu
void tworzenieWynikowejMacierzy(int iloscWierszy, int iloscKolumn, string typ) {
    if (typ == "Int") {
        macierzWynikInt = new int *[iloscWierszy];

        for (int i = 0; i < iloscWierszy; i++) {
            macierzWynikInt[i] = new int[iloscKolumn];
        }
    } else {
        macierzWynikDouble = new double *[iloscWierszy];
        for (int i = 0; i < iloscWierszy; i++) {
            macierzWynikDouble[i] = new double[iloscKolumn];
        }
    }

}