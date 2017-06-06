/*

ПРОЕКТ "РАЗГОВОР С МАРСОМ"

*/

#include <iostream> 
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double distance; // расстояние
	double lightSpeed; // скорость света
	double delay; // задержка
	double delay_in_min; // задержка в минутах
	//---------------------------------------------//

	distance = 34000000.0; // миль
	lightSpeed = 186000.0; // миль в секунду

	delay = distance / lightSpeed;
	cout << "Временная задержка при разговоре с Марсом: " << delay << " секунд." << endl;
	//---------------------------------------------//

	delay_in_min = delay / 60;
	cout << "Это составляет " << delay_in_min << " минут." << endl;

	cout << "\n\n\n\a";
	system("pause");
	return 0;
}