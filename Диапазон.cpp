/* ���������� ����������� ��� �������� ����� ����� � ���������, 
������� ����� ������������ � ����������. */

#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int start = 0; // ������ ���������
	int finish = 0; // ����� ���������
	int sum = 0;

	cout << "������� ������ ���������: ";
	cin >> start;
	cout << "\n������� ����� ���������: ";
	cin >> finish;

	int i = start; // ����������� ����������

	while (i <= finish) {
		if (i % 2 != 0) {
			cout << i << " "; // �������� �������� ����� ������
			sum += i; // ����������� �� �����
		}
		i++;
	}

	cout << "\n����� �������� ����� � ��������� �� " << start << " �� " << finish;
	cout << " = " << sum << endl << endl;


	system("pause");
	return 0;
}