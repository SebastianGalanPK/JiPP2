//
// Created by Sebastian on 21.10.2021.
//

void tworzenieWynikowejMacierzy(int, int, std::string typ = "Int");

int ** addMatrix(int **, int **, int, int);
double ** addMatrix(double **, double **, int, int);
int ** subtractMatrix(int **, int **, int, int);
double ** subtractMatrix(double **, double **, int, int);
int ** multiplyMatrix(int **, int **, int, int, int);
double ** multiplyMatrix(double **, double **, int, int, int);
int ** multiplyByScalar(int**, int, int, int);
double ** multiplyByScalar(double **, int, int, double);
int ** transpozeMatrix(int**, int, int);
double ** transpozeMatrix(double **, int, int);
int ** powerMatrix(int **, int, int, unsigned);
double ** powerMatrix(double **, int, int, unsigned);
int determinantMatrix(int **, int, int);
double determinantMatrix(double **, int, int);
bool matrixIsDiagonal(int **, int, int);
bool matrixIsDiagonal(double **, int, int);
void swap(int &, int &);
void swap(double &, double &);
void sortRow(int *, int);
void sortRow(double *, int);
int ** sortRowsInMatrix(int **, int, int);
double ** sortRowsInMatrix(double **, int, int);