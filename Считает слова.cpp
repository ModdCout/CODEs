#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int amountDigits = 0;
	double totalSum = 0;
	double digit = 0;

	cout << "������� �����, ��� ������� (����� - 0)" << endl;
	
	do {
		cout << "����� " << amountDigits + 1 << " = ";
		cin >> digit;
		if (digit > 0) {
			amountDigits++;
			totalSum += digit;
		}
	} while (digit > 0);

	cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
	cout << "���������� ��������� �����: " << amountDigits << endl;
	cout << "����� �����: " << totalSum << endl;
	cout << "������� ��������������: " << totalSum / (double)amountDigits << endl;


	cout << "\n\n\n\n\n";
	system("pause");
	return 0;
}