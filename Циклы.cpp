/*1. ������������ ������������ ���� ����� � ����������,
���� ������������ �� ����� 0. ����� ����� ����,
�������� �� ����� ���������� �����, ������� ���� �������, �� ����� ����� � ������� ��������������.
���������: ���������� �������� ����������-�������, ������� ����� ������� ���������� ��������� �����,
� ����������, ������� ����� ����������� ����� ����� �����. */

#include <iostream>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int amountDigits = 0; // ���������� ��������� �����
	double totalSum = 0; // ����� �����
	double digit = 0;

	cout << "������� �����, ��� ������� (����� - 0)\n\n";

	do {
		cout << "����� " << amountDigits + 1 << " = ";
		cin >> digit;

		if (digit) { // ���� digit ����� �������� ����� 0(false)
			amountDigits++;
			totalSum += digit;
		}
	} while (digit); //���� digits ����� �������� �������� �� 0

	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "���������� ��������� �����: " << amountDigits << endl;
	cout << "����� �����: " << totalSum << endl;
	cout << "������� ��������������: " << totalSum / amountDigits << endl;

	system("pause");
	return 0;
}
