/* ���������� �������������� ����������� �� �������� ^. 
������ �������� ������������. 
��������: ������ = 5, �� ������ */

#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int height = 0; // ������ ������������
	cin >> height;

	for (int i = 0; i < height; i++) {
		for (int j = 1; j < height - i; j++) {
			cout << ' ';
		}
		for (int j = height - 2 * i; j <= height; j++) {
			cout << '^';
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
