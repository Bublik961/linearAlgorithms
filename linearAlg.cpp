/********************************
 * Автор: Тенц А. В.            *
 * Вариант: 7                   *
 * Название: Линейные алгоритмы *
 ********************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    double R3, R5, R8, R10, Rn;
    const double pi = 3.141592653589793;
    int n;

    cout << "Enter side length: ";
    cin >> a;

    cout << "Enter side count: ";
    cin >> n;

    R3 = (a * sqrt(3.0)) / 3.0;
    R5 = a * sqrt(0.5 + (sqrt(5.0) / 10.0));
    R8 = a * sqrt(1.0 + (sqrt(2.0) / 2.0));
    R10 = (a / 2.0) * (1.0 + sqrt(5.0));
    Rn = a / (2.0 * sin(pi / n));

    cout << "Triangle circumradius: " << R3 << endl
         << "Pentagon circumradius: " << R5 << endl
         << "Octagon circumradius: " << R8 << endl
         << "Decagon circumradius: " << R10 << endl
         << "General formula check: " << Rn << endl;
  
    return 0;
}