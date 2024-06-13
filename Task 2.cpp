#include <iostream>

using namespace std;

/**
* @brief Функция - точка входа в программу.
* @return Результат функции main.
*/
int main()
{
    setlocale(LC_ALL, "rus");

    bool is_good = true;
    double a, b;

    cout << "Введите число a: ";
    is_good = static_cast<bool>(cin >> a);

    if (is_good)
    {
        cout << "Введите число b: ";
        is_good = !!(cin >> b);
    }

    cout << endl;

    if (is_good)
    {
        cout << "a + b = " << a + b << endl;
        cout << "a - b = " << a - b << endl;
        cout << "a * b = " << a * b << endl;

        if (b != 0)
        {
            cout << "a / b = " << a / b << endl;
        }
        else
        {
            cout << "Ошибка. Деление на 0." << endl;
        }
    }

    if (!is_good)
        cout << "Ошибка ввода";

    cin >> a;
}