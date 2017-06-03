#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double length = 0;
	double weigth = 0;
	double S;

	cout << "¬веди длину: ";
	cin >> length;
	cout << "~~~~~~~~~~~~" << endl;
	cout << "¬веди ширину: ";
	cin >> weigth;
	cout << "~~~~~~~~~~~~" << endl;
	S = length * weigth;
	cout << "ѕлощадь = " << S << endl;


	cout << "\n\n\n";
	system("pause");
	return 0;
}