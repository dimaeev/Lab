/**************************************
* Автор: Алексеев Д.К.                *
* Дата: 23.09.2024                    *
* Название: Лаба 2 Линейные алгоритмы *
**************************************/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double pi = M_PI ;
    double l = 0.994 ;
    double a = 0.872665 ;
    double g = 9.80665 ;

    double A1 = 2 * pi * sqrt(l / g);
    double A2 = 2 * pi * sqrt((l / g) * (1 + (1.0 / 16.0) * (a * a)));
    double A3 = 2 * pi * sqrt((l / g) * (1 + 1.0 / 4.0 * pow(sin(a / 2.0), 2) + 9.0 / 64.0 * pow(sin(a / 2.0), 4)));

    cout << fixed << setprecision(6);

    cout << "По первой формуле: " << A1 << endl;
    cout << "По второй формуле: " << A2 << endl;
    cout << "По третьей формуле: " << A3 << endl;

    return 0;
}