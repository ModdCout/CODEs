/*1. Организовать беспрерывный ввод чисел с клавиатуры,
пока пользователь не введёт 0. После ввода нуля,
показать на экран количество чисел, которые были введены, их общую сумму и среднее арифметическое.
Подсказка: необходимо объявить переменную-счетчик, которая будет считать количество введенных чисел,
и переменную, которая будет накапливать общую сумму чисел. */

#include <iostream>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int amountDigits = 0; // количество введенных чтсел
	double totalSum = 0; // обзая сумма
	double digit = 0;

	cout << "Введите числа, для расчета (выйти - 0)\n\n";

	do {
		cout << "Число " << amountDigits + 1 << " = ";
		cin >> digit;

		if (digit) { // если digit любое значение кроме 0(false)
			amountDigits++;
			totalSum += digit;
		}
	} while (digit); //пока digits любое значение отличное от 0

	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "Количество введенных чисел: " << amountDigits << endl;
	cout << "Общая сумма: " << totalSum << endl;
	cout << "Среднее арифметическое: " << totalSum / amountDigits << endl;

	system("pause");
	return 0;
}
