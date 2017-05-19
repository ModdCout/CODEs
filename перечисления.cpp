#include <iostream>
#include <Windows.h>

using namespace std;

enum mall { parking = -1, hall, many_shops, roof };

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int floor;
	bool exit = false;

	while (!exit) {
		cout << "Выберите этаж (-1 этаж, 0 этаж, 1 этаж, 2 этаж): ";
		cin >> floor;
		cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
		switch(floor) {
		case parking:
			cout << "Ты находишься на -1 этаже. Это подземная парковка." << endl;
			break;
		case hall: 
			cout << "Ты находишься на 0 этаже. Это холл." << endl;
			break;
		case many_shops:
			cout << "Ты находишься на 1 этаже. Здась находятся торговые ряды." << endl;
			break;
		case roof:
			cout << "Ты приехал на второй этаж. Это крыша. Здесь ловить нечего( " << endl;
			break;
		default : 
			cout << "В этом здании нет такого этажа(" << endl;
		}
		cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
		cout << "Вернуться к выбору этажа (введите - 0). \n Выход (введите - 1): " << endl;
		cin >> exit;
	}


	cout << endl << endl << endl << endl << endl;
	system("pause");
	return 0;
}