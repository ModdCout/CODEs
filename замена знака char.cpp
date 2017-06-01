#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int n = 100;
	char a[n];

	char x;
	char h;

	cout << "Строка: ";
	cin.getline(a, n);

	cout << "Введите символ который нужно заенить: ";
	cin >> x;
	cout << "Введите символ НА который нужно заменить: ";
	cin >> h;

	for (int i = 0; i < strlen(a); i++) {
		if (a[i] == x) {
			a[i] = h;
		}
	}

	cout << a << endl;

	system("pause");
	return 0;
}