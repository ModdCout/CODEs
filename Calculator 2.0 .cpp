// Example program
#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(){
    
  setlocale(LC_ALL, "Russian");

int num_1, num_2, x;
float result;

cout << "����� �������� ��������� ���������?  " << endl;
cout << "\n1)��������" << endl;
cout << "2)���������" << endl;
cout << "3)���������" << endl;
cout << "4)�������" << endl;
cout << "\n����: ";
cin >> x;
cout << "������� ������ �����: ";
cin >> num_1;
cout << "������� ������ �����: ";
cin >> num_2;

switch(x){
	
    case 1:result = num_1 + num_2;
    cout << num_1 << " + " << num_2 << " = " << result << endl;
        break;
    case 2:result = num_1 - num_2;
    cout << num_1 << " - " << num_2 << " = " << result << endl;
        break;
    case 3:result = num_1 * num_2;
    cout << num_1 << " * " << num_2 << " = " << result << endl;
        break;
    case 4:result = (float)num_1 / (float)num_2;
    cout << num_1 << " / " << num_2 << " = " << result << endl;
        break;
    default: cout << "�������� �������! ����!";
}


return 0;
}
