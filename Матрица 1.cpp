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
	const int m = 10;

	int a[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = i == j;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}




	system("pause");
	return 0;
}