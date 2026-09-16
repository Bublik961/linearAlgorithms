// Тенц Ангелина 7 Вариант Линейные

#include <iostream>
using namespace std;

int main()
{
    double R3, R5, R8, R10;
    double Rn;
    const double a = 16.74, pi = 3.14, n = 3;

    R3 = (a * sqrt(3)) / 3;
    R5 = a * (sqrt(0.5 + (sqrt(5) / 10)));
    R8 = a * (sqrt(1 + (sqrt(2) / 2)));
    R10 = (a / 2) * (1 + sqrt(5));
    Rn = a / (2 * sin(pi / n));
    cout << "R3 = " << R3 << "R5 = " << R5 << "R8 = " << R8 << "R10 = " << R10;
    cout << "R3 = " << R3 << endl;
    cout << "R5 = " << R5 << endl;
    cout << "R8 = " << R8 << endl;
    cout << "R10 = " << R10 << endl;

    cout << "Check" << endl;
    cout << "R3 = " << Rn << endl;

    return 0;
}
