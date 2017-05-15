#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int operation;
	double USD = 0;
	double BITCOIN = 0;
	double result = 0;

	cout << "  Какую операцию выполнить? " << endl;
	cout << " _________________________" << endl;
	cout << " 1)USD => BITCOIN" << endl;
	cout << " 2)BITCOIN => USD" << endl;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" << endl;
	cout << "ВВОД: ";
	cin >> operation;

	switch (operation) {
	case 1: 
		cout << "Введите количество USD: ";
		cin >> USD;
		cout << endl;
		BITCOIN = 245;
		result = (double)USD / (double)BITCOIN;
		cout << USD << " USD " << " = " << result << " BITCOIN" << endl;
		break;
	case 2:
		cout << "Введите количество BITCOIN: ";
		cin >> BITCOIN;
		cout << endl;
		USD = 245;
		result = (double)BITCOIN * (double)USD;
		cout << BITCOIN << " BITCOIN " << " = " << result << " USD" << endl;
		break;
	}



	cout << endl << endl << endl;
	system("pause");
	return 0;
}