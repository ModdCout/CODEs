#include <iostream>
#include <Windows.h>
#include <ctime>


using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	time_t t;
	srand((unsigned)time(&t));

	int magic; // ���������� �����
	int guess; // ������� ������������

	magic = 1 + rand() % 354; // �������� ��������� �����
	do {
		cout << "������� ���� �������: ";
		cin >> guess;
		if (guess == magic) {
			cout << "*******���������*********" << endl;
			cout << "***" << guess << " � ���� ���������� �����***" << endl;
		}
		else {
			cout << "�������� �� �� ��������(((" << endl;
				if (guess > magic) {
					cout << "���� ����� ������� ������(" << endl << endl;
				}
				else {
					cout << "���� ����� ������� ���� (((" << endl << endl;
				}
		}
	} while (guess != magic);

	cout << "\n\n\n\n";
	system("pause");
	return 0;
}