#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double Principal; // начальна€ сумма ссуды
	double IntRate; // ставка процента по ссуде
	double PayPerYear; // число платежей в год
	double NumYears; // число лет, на которое выдана ссуда
	double Payment; // регул€рный платеж

	double numer, denom; // временные рабочие переменные
	double b, e, f; // основание и пор€док дл€ выхова функции pow()

	cout << "¬ведите сумму ссуды: ";
	cin >> Principal;
	cout << endl;

	cout << "¬ведите процентную ставку (например, 0.075) : ";
	cin >> IntRate;
	cout << endl;

	cout << "¬ведите число платежей в год: ";
	cin >> PayPerYear;
	cout << endl;

	cout << "¬ведите число лет: ";
	cin >> NumYears;
	cout << endl;

	// добавл€ем строки выполн€ющие финансовые вычислени€:

	numer = IntRate * Principal / PayPerYear;

	e = -(PayPerYear * NumYears);
	b = (IntRate / PayPerYear) + 1;
	f = IntRate * PayPerYear;

	denom = 1 - pow(b, e);
	Payment = numer / denom;

	// вывод конечной суммы платежа
	cout << "¬сего нужно выплатить: " << f;
	cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
	cout << "ѕлатеж составит " << Payment;

	cout << "\n\n\n\n\n";
	system("pause");
	return 0;
}