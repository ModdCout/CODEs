#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char choise;

	for (;;) {
		do {
			cout << "Справка по :" << endl;
			cout << "1. if" << endl;
			cout << "2. switch" << endl;
			cout << "3. for" << endl;
			cout << "4. while" << endl;
			cout << "5. do-while" << endl;
			cout << "6. break" << endl;
			cout << "7. continue" << endl;
			cout << "8. goto" << endl;
			cout << "\n~~~~~~~~~~~~~~~~~~~~~~\n\n";
			cout << "Введите один из пунктов (q - для завершения):  ";
			cin >> choise;
		} while (choise < '1' || choise > '8' && choise != 'q');

		if (choise == 'q') break;

		cout << "\n\n";

		switch (choise) {
		case '1': 
			cout << " Предложение if: \n\n";
			cout << " if (условие) предложение;\n";
			cout << " else предложение;\n";
			break;
		case '2':
			cout << " Предложение switch: \n\n";
			cout << " switch (выражение) {\n";
			cout << " case константа:\n";
			cout << " последовательность предложений\n";
			cout << " break;\n";
			cout << "      }\n";
				break;
		case '3':
			cout << " Предложение for: \n\n";
			cout << " for (инициализация; условие; приращение)\n";
			cout << " предложение;\n";
			break;
		case '4':
			cout << " Предложение while: \n\n";
			cout << " while (условие) предложениеж;\n";
			break;
		case '5':
			cout << " Предложение do-while: \n\n";
			cout << " do { \n";
			cout << " предложение;\n";
			cout << " } while (условие);\n";
			break;
		case '6':
			cout << " Предложение break: \n\n";
			cout << "break;\n";
			break;
		case '7':
			cout << " Предложение continue: \n\n";
			cout << " continue;\n";
			break;
		case '8':
			cout << " Предложение goto: \n\n";
			cout << " goto метка;\n";
			break;
		}
		cout << "\n";
	}

	cout << "\n\n\n";
	system("pause");
	return 0;
}