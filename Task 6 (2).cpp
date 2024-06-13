#include <iostream>
#include <vector>
#include <random>

using namespace std;

/**
* @brief Вывод массива на экран.
* @param arr - массив для вывода на экран.
*/
void PrintArray(const vector<int> & arr)
{
    cout << "Массив:" << endl;

    for (int elem : arr)
    {
        cout << elem << ' ';
    }

    cout << endl << endl;
}

/**
* @brief Задание 1 - Подсчет суммы четных элементов массива.
* @param arr - массив для подсчета суммы.
* @return Сумма четных элементов массива.
*/
int Func1(const vector<int>& arr)
{
    int sum = 0;

    for (int elem : arr)
    {
        if (elem % 2 == 0)
            sum += elem;
    }

    return sum;
}

/**
* @brief Задание 2 - Подсчет количества двузначных элементов массива.
* @param arr - массив для подсчета количества двузначных элементов.
* @return Количество двузначных элементов массива.
*/
int Func2(const vector<int> & arr)
{
    int count = 0;

    for (int elem : arr)
    {
        if (abs(elem) >= 10 and abs(elem) <= 99)
            count++;
    }

    return count;
}

/**
* @brief Задание 3 - Замена последнего отрицательного элемента массива на модуль первого элемента.
* @param arr - массив в котором будет произведена замена.
*/
void Func3(vector<int> & arr)
{
    for (auto elem = arr.rbegin(); elem != arr.rend(); elem++)
    {
        if (*elem < 0)
        {
            *elem = abs(arr.at(0));
            break;
        }
    }
}

/**
* @brief Функция - точка входа в программу.
* @return Результат функции main.
*/
int main()
{
    setlocale(LC_ALL, "rus");
    srand((unsigned int)time(NULL));

    vector<int> n_array;
    int rand_min = -1000;
    int rand_max = 1000;
    int n;
    bool is_good = true;

    cout << "Введите размер массива n: ";
    is_good = !!(cin >> n);

    if (is_good)
    {
        cout << "Ввести числа вручную? (y/n)" << endl;
        char yn;
        cin >> yn;
        bool is_random = yn != 'y';
        cout << endl;

        for (int i = 0; i < n; i++)
        {
            if (is_random)
            {
                n_array.push_back(rand() % (rand_max - rand_min + 1) + rand_min);
            }
            else
            {
                cout << "Введите элемент[" << i << "]: ";
                int el;

                if (cin >> el)
                {
                    n_array.push_back(el);
                }
                else
                {
                    is_good = false;
                    break;
                }
            }
        }
    }

    if (is_good)
    {
        PrintArray(n_array);
        cout << "Сумма четных элементов равна " << Func1(n_array) << endl;
        cout << "Количество двузначиных элементов равно " << Func2(n_array) << endl;
        Func3(n_array);
        PrintArray(n_array);
    }

    if (!is_good)
        cout << "Ошибка ввода";
}