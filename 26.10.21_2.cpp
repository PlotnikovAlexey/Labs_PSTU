#include <iostream>
#include <clocale>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int attempt;
	int number = rand()%100+1;
	cout << "Попробуйте угадать число. У вас 7 попыток:" << endl;
	for (int i = 1; i <= 7; i++) {
		cout << i << "-я попытка" << endl;
		cin >> attempt;
		if (number != attempt) {
			if (attempt > number)
				cout << "Нужно число меньше, чем " << attempt << endl;
			else
				cout << "Нужно число больше, чем " << attempt << endl;
		}
		else {
			cout << "Вы выиграли " << attempt << endl;
			return 0;
		}
	}
	cout << "Вы проиграли" << endl << "Число:" << number;
	return 0;
}
