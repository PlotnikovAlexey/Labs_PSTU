#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int count, first, second, third ;
    bool Flag ;
    setlocale(LC_ALL, "Rus");
    cout << "Введите трехзначное число состоящее из разных цифр" << "\n";
    cin >> count ;
    while ( Flag == false) {
        first = count / 100; 
        second = (count / 10) % 10; 
        third = count % 10; // 
        if (count > 100) {
            if ( count < 999) {
                if (first != second) {
                    if (second != third) {
                        if (third != first) {
                            Flag = true ;
                        }
                    }
                }
            }
        }
        if ( Flag == false) {
            cout << "Число не трехзначное или содержит повторяющиеся цифры. Повторите ввод:" << "\n";
            cin >> count;
        }
    }
    cout << "Возможные комбинации чисел: " << "\n";
    cout << first << second << third << "\n";

    swap(second,third);
    cout << first << second << third << "\n";

    swap(first,second);
    cout << first << second << third << "\n";

    swap(first,third);
    cout << first << second << third << "\n";

    swap(second,third);
    cout << first << second << third << "\n";

    swap(first,second);
    cout << first << second << third << "\n";

    cout << "Максимальное число : ";
    if (first > second) {    
        if (first > third) { 
            if (second > third) { 
                cout << first << second << third << endl;
            }
            else {
                cout << first << third << second << endl;
            }
        }
    }
    else {
        if (second > third) {
            if (first > third) {
                cout << second << first << third << endl;
            }
            else{
                cout << second << third << first << endl;
            }
        }
        else{
            if (first > second) {
                cout << third << first << second << endl;
            }
            else {
                cout << third << second << first << endl;
            }
        }
    }
    return 0;
}
