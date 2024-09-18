/**************************************
* Автор: Алексеев Д.К.                *
* Дата: 17.09.2024                    *
* Название: Лаба 2 Линейные алгоритмы *
**************************************/
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double pi = M_PI ;
    double l = 0.994 ;
    double a = 0.872665 ;
    double g = 9.80665 ;
    cout << fixed << setprecision(6) << 2 * pi * sqrt(l/g) << endl ;
    cout << 2 * pi * sqrt((l/g) * 1 + (1.0/16.0) * (a*a)) << endl ;
    cout << 2 * pi * sqrt((l/g) * (1 + 1.0/4.0 * pow(sin(a/2.0), 2) + 9.0/64.0 * pow(sin(a/2.0), 4))) << endl ;
    return 0;
}