#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char choise;

	for (;;) {
		do {
			cout << "������� �� :" << endl;
			cout << "1. if" << endl;
			cout << "2. switch" << endl;
			cout << "3. for" << endl;
			cout << "4. while" << endl;
			cout << "5. do-while" << endl;
			cout << "6. break" << endl;
			cout << "7. continue" << endl;
			cout << "8. goto" << endl;
			cout << "\n~~~~~~~~~~~~~~~~~~~~~~\n\n";
			cout << "������� ���� �� ������� (q - ��� ����������):  ";
			cin >> choise;
		} while (choise < '1' || choise > '8' && choise != 'q');

		if (choise == 'q') break;

		cout << "\n\n";

		switch (choise) {
		case '1': 
			cout << " ����������� if: \n\n";
			cout << " if (�������) �����������;\n";
			cout << " else �����������;\n";
			break;
		case '2':
			cout << " ����������� switch: \n\n";
			cout << " switch (���������) {\n";
			cout << " case ���������:\n";
			cout << " ������������������ �����������\n";
			cout << " break;\n";
			cout << "      }\n";
				break;
		case '3':
			cout << " ����������� for: \n\n";
			cout << " for (�������������; �������; ����������)\n";
			cout << " �����������;\n";
			break;
		case '4':
			cout << " ����������� while: \n\n";
			cout << " while (�������) ������������;\n";
			break;
		case '5':
			cout << " ����������� do-while: \n\n";
			cout << " do { \n";
			cout << " �����������;\n";
			cout << " } while (�������);\n";
			break;
		case '6':
			cout << " ����������� break: \n\n";
			cout << "break;\n";
			break;
		case '7':
			cout << " ����������� continue: \n\n";
			cout << " continue;\n";
			break;
		case '8':
			cout << " ����������� goto: \n\n";
			cout << " goto �����;\n";
			break;
		}
		cout << "\n";
	}

	cout << "\n\n\n";
	system("pause");
	return 0;
}