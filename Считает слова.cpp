#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int amountDigits = 0;
	double totalSum = 0;
	double digit = 0;

	cout << "Введите числа, для расчета (выход - 0)" << endl;
	
	do {
		cout << "Число " << amountDigits + 1 << " = ";
		cin >> digit;
		if (digit > 0) {
			amountDigits++;
			totalSum += digit;
		}
	} while (digit > 0);

	cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
	cout << "Количество введенных чисел: " << amountDigits << endl;
	cout << "Общая сумма: " << totalSum << endl;
	cout << "Среднее арифметическое: " << totalSum / (double)amountDigits << endl;


	cout << "\n\n\n\n\n";
	system("pause");
	return 0;
}