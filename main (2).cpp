#include <iostream>
#include <cmath>

using namespace std;

/**
* @brief Функция - точка входа в программу.
* @return Результат функции main.
*/

int main()
{
    const double x = -0.5;
    const double y = 1.7;
    const double z = 0.44;

    double a = exp(-y * z) * sin(x * z - y) - sqrt(abs(y * z + x));
    double b = y * sin(a * z * z * cos(2 * z)) - 1;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}