#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double length = 0;
	double weigth = 0;
	double S;

	cout << "����� �����: ";
	cin >> length;
	cout << "~~~~~~~~~~~~" << endl;
	cout << "����� ������: ";
	cin >> weigth;
	cout << "~~~~~~~~~~~~" << endl;
	S = length * weigth;
	cout << "������� = " << S << endl;


	cout << "\n\n\n";
	system("pause");
	return 0;
}