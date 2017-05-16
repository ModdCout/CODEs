#include <iostream>
#include <Windows.h>
#include <time.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int n = 10;
	int a[n];

	time_t t;
	srand((unsigned)time(&t));

	for (int i = 0; i < n; i++) {
		a[i] = rand() % 100;
		cout << a[i] << " ";
	}
	cout << "\n========================================================================\n\n";



	cout << endl << endl;
	system("pause");
	return 0;
}