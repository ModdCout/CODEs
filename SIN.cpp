#include <iostream>
#include <time.h>
#include <math.h>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	time_t t;
	srand((unsigned) time(&t));

	const int n = 15;
	int a[n];
	int sum = 0;
	int kol = 0;

	cout << "Все элементы массива: " << endl;
	for (int i = 0; i < n; i++) {
		a[i] = -50 + rand() % 100;
		cout << a[i] << " ";
	} 
cout << "\n\n===================================================\n\n";

	cout << "Четные элементы массива: " << endl;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			cout << a[i] << " ";
			kol++;
		}
	}
cout << "\n\n===================================================\n\n";

cout << "Количество четных элементов массива: " << kol << endl; 



	cout << endl << endl << endl;
	system("pause");
	return 0;
}
