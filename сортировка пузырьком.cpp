#include <iostream>
#include <Windows.h>
#include <time.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	time_t t;
	srand((unsigned)time(&t));

	const int n = 10;
	int a[n];
	int temp = 0;
	int i = 0;

	cout << "Рандом: ";
	for (i = 0; i < n; i++) {
		a[i] = 50 - rand() % 100;
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

	for (i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	
	cout << "Сортировка:  ";
	for (i = 0; i < n; i++) {
		cout << a[i] << " ";
	}


	cout << endl << endl << endl;
	system("pause");
	return 0;
}