#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string name;

	cout << "Как тебя зовут? " << endl;
	cout << "Имя: ";
	cin >> name;

	if (name.length() != 0) {
		cout << "Привет, " << name << ". Очень приятно) " << endl;
	}
	else {
		cout << "Ты не ввел имя((" << endl;
	}

	system("pause");
	return 0;
}
