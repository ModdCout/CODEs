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
	int i = 0;
	int temp = 0;
	int min = 100, imin = 0, max = 0, imax = 0;

	cout << "\n\n Массив: " << endl;
	for (i = 0; i < n; i++) {
		a[i] = 1 + rand() % 100;
		cout << a[i] << " ";
	}
	cout << "\n=====================================================\n\n";

	for (i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	
	for (i = 0; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
			imin = i;
		}
		if (a[i] > max) {
			max = a[i];
			imax = i;
		}
	}


	cout << "\n\n Сортировка:" << endl;
	for (i = 0; i < n; i++) {
		cout << a[i] << " ";
		}
	cout << "\n=====================================================\n\n";
	
	cout << "Минимальное значение: " << min << " [" << imin << "] " << endl;
	cout << "Максимальное значение: " << max << " [" << imax << "] " << endl;


	cout << endl << endl << endl;
	system("pause");
	return 0;
}