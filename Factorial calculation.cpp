#include <iostream>
#include <Windows.h>

using namespace std;

long double fact(int N) {

	if (N < 0) // Если пользователь ввел отрицательное число
		return 0; // Возвращаем ноль
	if (N == 0) // Если пользователь ввел ноль
		return 1; // Возвращаем факториал от нуля - Еденицу
	// Вычисляем факториал в цикле
	long double result = 1;
	for (int i = 1; i <= N; i++) {
		result *= i;
	}
	
	return result;
}

int main() {

int N;

	SetConsoleCP(1251); //  Включаем -
	SetConsoleOutputCP(1251); // - кириллицу )

	cout << "Введите число для вычисления факториала: ";
	cin >> N;
	cout << "\nФакториал для числа " << N << " = " << fact(N) << endl << endl; // fact(N) - функция для вычисления факториала.

	system("pause");
	return 0;
}