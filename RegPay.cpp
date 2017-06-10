#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double Principal; // ��������� ����� �����
	double IntRate; // ������ �������� �� �����
	double PayPerYear; // ����� �������� � ���
	double NumYears; // ����� ���, �� ������� ������ �����
	double Payment; // ���������� ������

	double numer, denom; // ��������� ������� ����������
	double b, e, f; // ��������� � ������� ��� ������ ������� pow()

	cout << "������� ����� �����: ";
	cin >> Principal;
	cout << endl;

	cout << "������� ���������� ������ (��������, 0.075) : ";
	cin >> IntRate;
	cout << endl;

	cout << "������� ����� �������� � ���: ";
	cin >> PayPerYear;
	cout << endl;

	cout << "������� ����� ���: ";
	cin >> NumYears;
	cout << endl;

	// ��������� ������ ����������� ���������� ����������:

	numer = IntRate * Principal / PayPerYear;

	e = -(PayPerYear * NumYears);
	b = (IntRate / PayPerYear) + 1;
	f = IntRate * PayPerYear;

	denom = 1 - pow(b, e);
	Payment = numer / denom;

	// ����� �������� ����� �������
	cout << "����� ����� ���������: " << f;
	cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
	cout << "������ �������� " << Payment;

	cout << "\n\n\n\n\n";
	system("pause");
	return 0;
}