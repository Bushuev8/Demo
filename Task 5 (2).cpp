#include <iostream>
#include <cmath>

using namespace std;
/**
* @brief Вычисление фаториала числа.
* @param f - Число, факториал которого надо вычислить.
* @return Факториал числа.
*/
double factorial(int f);
/**
* @brief Функция вичисления элемента последовательности.
* @param k - номер элемента последовательности.
* @return Значение элемента последовательности.
*/
double Func(int k);
/**
* @brief Вычислить сумму n первых элементов последовательности.
* @param n - количество элементов последовательности.
* @return Возвращает сумму n первых элементов последовательности.
*/
double FuncA(int n);
/**
* @brief Вычислить сумму n первых элементов последовательности, по модулю не меньших заданного числа е.
* @param n - количество элементов последовательности.
* @param e - число, с которым сравниваются элементы последовательности.
* @return Возвращает сумму n первых элементов последовательности, по модулю не меньших заданного числа е.
*/
double FuncB(int n, double e);

/**
* @brief Функция - точка входа в программу.
* @return Результат функции main.
*/
int main()
{
    setlocale(LC_ALL, "rus");
    
    int n;
    double e;

    cout << "Введите целое число n: ";

    if (cin >> n)
    {
        cout << "Введите число e: ";

        if (cin >> e)
        {
            cout << "Ответ задания a): " << FuncA(n) << endl;
            cout << "Ответ задания b): " << FuncB(n, e) << endl;
            return 1;
        }
    }
    
    cout << "Ошибка ввода";
    return 0;
}

double factorial(int f)
{
    double res = 1;

    for (int i = 1; i <= f; i++)
        res *= i;

    return res;
}
double Func(int k)
{
    return pow(-1, k) * (1 / pow(factorial(k), 2));
}
double FuncA(int n)
{
    double sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += Func(i);
    }

    return sum;
}

double FuncB(int n, double e)
{
    double sum = 0;

    for (int i = 1; i <= n; i++)
    {
        double val = Func(i);

        if (abs(val) >= e)
            sum += val;
    }

    return sum;
}
