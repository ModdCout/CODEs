#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	int month;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Ââåäèòå íîìåð ìåñÿöà: ";
	cin >> month;
	cout << endl;

	switch (month) {

	case 1:cout << "ßíâàðü" << endl;
		break;
	case 2:cout << "Ôåâðàëü" << endl;
		break;
	case 3:cout << "Ìàðò" << endl;
		break;
	case 4:cout << "Àïðåëü" << endl;
		break;
	case 5:cout << "Ìàé" << endl;
		break;
	case 6:cout << "Èþíü" << endl;
		break;
	case 7:cout << "Èþëü" << endl;
		break;
	case 8:cout << "Àâãóñò" << endl;
		break;
	case 9:cout << "Ñåíòÿáðü" << endl;
		break;
	case 10:cout << "Îêòÿáðü" << endl;
		break;
	case 11:cout << "Íîÿáðü" << endl;
		break;
	case 12:cout << "Äåêàáðü" << endl;
		break;
	default: cout << "\nÍÅÂÅÐÍÎÅ ÇÍÀ×ÅÍÈÅ!!!" << endl;
	}


	cout << endl;
system("pause");
	return 0;
}