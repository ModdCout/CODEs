#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	int month;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "������� ����� ������: ";
	cin >> month;
	cout << endl;

	switch (month) {

	case 1:cout << "������" << endl;
		break;
	case 2:cout << "�������" << endl;
		break;
	case 3:cout << "����" << endl;
		break;
	case 4:cout << "������" << endl;
		break;
	case 5:cout << "���" << endl;
		break;
	case 6:cout << "����" << endl;
		break;
	case 7:cout << "����" << endl;
		break;
	case 8:cout << "������" << endl;
		break;
	case 9:cout << "��������" << endl;
		break;
	case 10:cout << "�������" << endl;
		break;
	case 11:cout << "������" << endl;
		break;
	case 12:cout << "�������" << endl;
		break;
	default: cout << "\n�������� ��������!!!" << endl;
	}


	cout << endl;
system("pause");
	return 0;
}