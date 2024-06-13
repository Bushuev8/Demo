#include <iostream>

using namespace std;

/**
* @brief Функция - точка входа в программу.
* @return Результат функции main.
*/
int main()
{
    setlocale(LC_ALL, "rus");
    double x, y;
    bool is_good = true;

    cout << "Введите число x: ";
    is_good = !!(cin >> x);

    if (is_good)
    {
        cout << "Введите число y: ";
        is_good = !!(cin >> y);
    }

    if (is_good)
    {
        if (x == y)
        {
            cout << "Ошибка. Числа x и y должны быть различны.";
        }
        else
        {
            if (x > y)
            {
                double tmp = (x + y) / 2;
                x = 2 * x * y;
                y = tmp;
            }
            else
            {
                double tmp = (x + y) / 2;
                y = 2 * x * y;
                x = tmp;
            }

            cout << "x = " << x << endl;
            cout << "y = " << y << endl;
        }
    }
  
    if (!is_good)
       cout << "Ошибка ввода.";
}