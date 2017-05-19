#include <iostream>
#include <Windows.h>

using namespace std;

struct Date { // создание структуры Дата
	int year; // присваеваем дате Год
};

struct Auto {    // создаем структуру автомобиля
	int wheels;  // создаем автомобилю колеса
	float speed; // создаем максимальную скорость автомобиля
	char color;  // создаем цвет автомобилю

	Date sozdanie; // подключаемся к значению другой структуры
};

int main() {

	Auto shkoda;   // создаем объект 
	shkoda.color = 'r';  // присваеваем объекту значения
	shkoda.speed = 315.23;
	shkoda.wheels = 4;
	shkoda.sozdanie.year = 1999;

	Auto audi = { 4, 300.23, 'b', 2012}; // альтернативный вариант присваевания

	cout << "Audi speed = " << audi.speed << endl;
	cout << "Shkoda speed = " << shkoda.speed << endl;
	cout << "Audi year = " << audi.sozdanie.year << endl;
	cout << "Shkoda year = " << shkoda.sozdanie.year << endl;




	cout << endl << endl << endl;
	system("pause");
	return 0;
}