#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, di_1, di_2;

	cout << "������� �����: " << endl;
	cin >> a;
	cout << "������� �������� �����!" << endl;
	cout << "��: ";
	cin >> di_1;
	cout << "\n��: ";
	cin >> di_2;
	cout << endl;



	if((a > di_1) && (a < di_2)) {
		cout << "����� " << a << " ��������� � ��������� �����: " << di_1 << " � " << di_2 << endl;
	}
	
	else {
		cout << "����� " << a << " �� ��������� � ��������� �����: " << di_1 << " � " << di_2 << endl;
	}

	system("pause");
	return 0;
}