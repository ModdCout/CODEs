#include <iostream>
#include <Windows.h>

using namespace std;

class Auto {
public:
	void message() {
		cout << "Class is working!" << endl;
	}

		void set(int date_year, int date_month, int date_day) {
			year = date_year;
			month = date_month;
			day = date_day;
		}

		void get() {
			cout << " Год выпустка автомобиля - " << year << "\n Месяц - " << month << "\n День - " << day << endl;
		}
private:
	int year, month, day;
};

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Auto shkoda;
	shkoda.message();
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "Shkoda" << endl;
	shkoda.set(2005, 6, 14);
	shkoda.get();
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	
	Auto BMW;
	cout << "BMW" << endl;
	BMW.set(2014, 4, 16);
	BMW.get();
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";


	cout << endl;
	system("pause");
	return 0;
}