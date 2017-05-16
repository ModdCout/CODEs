#include <iostream>
#include <Windows.h>
#include <time.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	time_t t;
	srand((unsigned)time(&t));

	const int n = 15;
	int a[n];

	for (int i = 0; i < n; i++) {
		a[i] = rand()% 100;
		cout << a[i] << " ";
	}



	cout << endl << endl;
	system("pause");
	return 0;
}