#include <iostream>
#include <Windows.h>

using namespace std;

int main(){

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

int priora, mercedes;
int  result;

cout << "Введите стоимость mercedes S63 coup: ";
cin >> mercedes;
cout << endl;
cout << "Введите стоимость Lada Priora: ";
cin >> priora;

if (mercedes > priora){
  result = mercedes / priora;
  cout << " Пиздец! За эти дениги ты мог бы купить " << result << " Приор!" << endl;
}
 else {
   result = priora / mercedes;
cout << " Ты наитупейшее создание! За эти дениги ты мог бы взять " << result  << " Мерседесов!" << endl;
 }



	system("pause");
  return 0;
}
