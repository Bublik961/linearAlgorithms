/********************************
 * Автор: Тенц А. В.            *
 * Вариант: 2                   *
 * Название: Линейные алгоритмы *
 ********************************/

#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double x1, x2, x3;
    double alfa, P, g, pi;
    const double a = 0.52, b = -3.552, c = 3.24;

    g = c / a;
    P = b / a;
    pi = acos(-1.0);
    alfa = acos(-g / (2 * sqrt(pow((-P / 3), 3))));
    x1 = 2 * sqrt(-P / 3) * cos(alfa / 3);
    x2 = -2 * sqrt(-P / 3) * cos((alfa + pi) / 3);
    x3 = -2 * sqrt(-P / 3) * cos((alfa - pi) / 3);
    

    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    cout << "x3 = " << x3 << endl;

    return 0;
}