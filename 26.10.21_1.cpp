#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int X, num1, num2, num3;

    cout << "Введите трехзначное число:" << endl;
    cin >> X;

    while ((X < 100) || (X > 999)) {
        cout << "Введенное число не является трехзначным" << endl << "Повторите ввод" << endl;
        cin >> X;
    }

    num1 = X / 100;
    num2 = (X / 10) % 10;
    num3 = X % 10;

    cout << "Все возможные последовательности чисел:" << endl;
    cout << num1 << num2 << num3 << endl;
    cout << num1 << num3 << num2 << endl;
    cout << num2 << num3 << num1 << endl;
    cout << num2 << num1 << num3 << endl;
    cout << num3 << num2 << num1 << endl;
    cout << num3 << num1 << num2 << endl << endl;

    cout << "Наибольшее из этих чисел: ";
    if (num1 > num2) {
        if (num2 > num3)
            cout << num1 << num2 << num3;
        else if (num1 > num3)
            cout << num1 << num3 << num2;
        else
            cout << num3 << num1 << num2;
    }
    else {
        if (num3 > num2)
            cout << num3 << num2 << num1;
        else if (num1 > num3)
            cout << num2 << num1 << num3;
        else
            cout << num2 << num3 << num1;
    }
    return 0;
}