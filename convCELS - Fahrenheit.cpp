//
// программа для преобразования градусов Цельсия в градусы Фарингейта:
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
		cout << "\t\t\t\tВведите температуру в градусах Цельсия: ";
		cin >> nNcelsius;
		cout << "\n\t\t\t\t==========================================\n\n";

		// вычислим преобразующий множитель

		float nNFactor;
		nNFactor = 212 - 32;

		// используем вычисленный множитель для
		// преобразования градусов Цельсия в 
		// градусы Фаренгейта.

		float nFahrenheit = nNFactor * nNcelsius / 100 + 32;

		// вывод результата

		cout << "\t\t\t\tТемпература по Фаренгейту: " << nFahrenheit << endl;
		cout << "\n\t\t\t\t==========================================\n\n";


		cout << "\n\n\n\n\n";
	system("pause");
	return 0;
}

