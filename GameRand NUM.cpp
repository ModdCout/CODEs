#include <iostream>
#include <Windows.h>
#include <ctime>


using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	time_t t;
	srand((unsigned)time(&t));

	int magic; // магическое число
	int guess; // догадка пользовател€

	magic = 1 + rand() % 354; // получаем случайное число
	do {
		cout << "¬ведите вашу догадку: ";
		cin >> guess;
		if (guess == magic) {
			cout << "*******ѕ–ј¬»Ћ№Ќќ*********" << endl;
			cout << "***" << guess << " и есть магическое число***" << endl;
		}
		else {
			cout << "»звините но вы ошиблись(((" << endl;
				if (guess > magic) {
					cout << "¬аше число слишком велико(" << endl << endl;
				}
				else {
					cout << "¬аше число слишком мало (((" << endl << endl;
				}
		}
	} while (guess != magic);

	cout << "\n\n\n\n";
	system("pause");
	return 0;
}