#include <iostream>
#include <cmath>

using namespace std;

/**
* @brief Функция a.
* @param x значение константы.
* @param y значение константы.
* @param z значение константы.
* @return Результат функции a.
*/
double CalculateA(const double x, const double y, const double z);

/**
* @brief Функция b.
* @param a результат вычисления функции a.
* @param x значение константы.
* @param y значение константы.
* @param z значение константы.
* @return Результат функции b.
*/
double CalculateB(const double a, const double x, const double y, const double z);

/**
* @brief Функция - точка входа в программу.
* @return Результат функции main.
*/
int main()
{
    const double x = -0.5;
    const double y = 1.7;
    const double z = 0.44;

    double a = CalculateA(x, y, z);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    cout << "a = " << a << endl;
    cout << "b = " << CalculateB(a, x, y, z) << endl;

    return 1;
}

double CalculateA(double x, double y, double z)
{
    return exp(-y * z) * sin(x * z - y) - sqrt(abs(y * z + x));
}

double CalculateB(double a, double x, double y, double z)
{
    return y * sin(a * z * z * cos(2 * z)) - 1;
}
