//
// ��������� ��� �������������� �������� ������� � ������� ����������:
//  Fahrenheit = NCelsius * (212 - 32) / 100 + 32
//

#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <time.h>

using namespace std;

	int main(int nNumberofArgs, char* pszArgs[]) {

		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
	
		float nNcelsius;
		cout << "\t\t\t\t������� ����������� � �������� �������: ";
		cin >> nNcelsius;
		cout << "\n\t\t\t\t==========================================\n\n";

		// �������� ������������� ���������

		float nNFactor;
		nNFactor = 212 - 32;

		// ���������� ����������� ��������� ���
		// �������������� �������� ������� � 
		// ������� ����������.

		float nFahrenheit = nNFactor * nNcelsius / 100 + 32;

		// ����� ����������

		cout << "\t\t\t\t����������� �� ����������: " << nFahrenheit << endl;
		cout << "\n\t\t\t\t==========================================\n\n";


		cout << "\n\n\n\n\n";
	system("pause");
	return 0;
}

