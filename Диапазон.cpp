/* Необходимо суммировать все нечётные целые числа в диапазоне, 
который введёт пользователь с клавиатуры. */

#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int start = 0; // начало диапазона
	int finish = 0; // конец диапазона
	int sum = 0;

	cout << "Введите начало диапазона: ";
	cin >> start;
	cout << "\nВведите конец диапазона: ";
	cin >> finish;

	int i = start; // управляющая переменная

	while (i <= finish) {
		if (i % 2 != 0) {
			cout << i << " "; // показать нечетные через пробел
			sum += i; // накапливать их сумму
		}
		i++;
	}

	cout << "\nСумма нечетных чисел в диапазоне от " << start << " по " << finish;
	cout << " = " << sum << endl << endl;


	system("pause");
	return 0;
}