#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string name;

	cout << "��� ���� �����? " << endl;
	cout << "���: ";
	cin >> name;

	if (name.length() != 0) {
		cout << "������, " << name << ". ����� �������) " << endl;
	}
	else {
		cout << "�� �� ���� ���((" << endl;
	}

	system("pause");
	return 0;
}
