#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, di_1, di_2;

	cout << "Введите число: " << endl;
	cin >> a;
	cout << "Укажите диапозон чисел!" << endl;
	cout << "От: ";
	cin >> di_1;
	cout << "\nДо: ";
	cin >> di_2;
	cout << endl;



	if((a > di_1) && (a < di_2)) {
		cout << "Число " << a << " находится в диапозоне чисел: " << di_1 << " и " << di_2 << endl;
	}
	
	else {
		cout << "Число " << a << " НЕ НАХОДИТСЯ в диапозоне чисел: " << di_1 << " и " << di_2 << endl;
	}

	system("pause");
	return 0;
}