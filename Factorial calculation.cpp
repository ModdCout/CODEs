#include <iostream>
#include <Windows.h>

using namespace std;

long double fact(int N) {

	if (N < 0) // ���� ������������ ���� ������������� �����
		return 0; // ���������� ����
	if (N == 0) // ���� ������������ ���� ����
		return 1; // ���������� ��������� �� ���� - �������
	// ��������� ��������� � �����
	long double result = 1;
	for (int i = 1; i <= N; i++) {
		result *= i;
	}
	
	return result;
}

int main() {

int N;

	SetConsoleCP(1251); //  �������� -
	SetConsoleOutputCP(1251); // - ��������� )

	cout << "������� ����� ��� ���������� ����������: ";
	cin >> N;
	cout << "\n��������� ��� ����� " << N << " = " << fact(N) << endl << endl; // fact(N) - ������� ��� ���������� ����������.

	system("pause");
	return 0;
}