#include <iostream>
#include <Windows.h>

using namespace std;

int main(){

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

int priora, mercedes;
int  result;

cout << "������� ��������� mercedes S63 coup: ";
cin >> mercedes;
cout << endl;
cout << "������� ��������� Lada Priora: ";
cin >> priora;

if (mercedes > priora){
  result = mercedes / priora;
  cout << " ������! �� ��� ������ �� ��� �� ������ " << result << " �����!" << endl;
}
 else {
   result = priora / mercedes;
cout << " �� ����������� ��������! �� ��� ������ �� ��� �� ����� " << result  << " ����������!" << endl;
 }



	system("pause");
  return 0;
}
