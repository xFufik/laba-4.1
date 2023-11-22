#include <iostream>
#include <locale>

using namespace std;

/*
 * Лабораторная работа 4. Задание 1. Индивидуальный вариант 24.
 * Посчитать четные и нечетные цифры введенного натурального числа
 */

int main() {
    setlocale(LC_ALL, "ru");
    int number;
    int digit;
    int even = 0;
    int odd = 0;

    cout << "Введите натуральное число ";
    cin >> number;

    while (number != 0) {
        digit = number % 10;
        if (digit % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }

        number /= 10;
    }
    cout << "Количество четных цифр: " << even << endl;
    cout << "Количество нечетных цифр: " << odd << endl;
}