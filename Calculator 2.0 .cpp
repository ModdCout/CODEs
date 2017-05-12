// Example program
#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(){
    
  setlocale(LC_ALL, "Russian");

int num_1, num_2, x;
float result;

cout << "Какую операцию требуется выполнить?  " << endl;
cout << "\n1)Сложение" << endl;
cout << "2)Вычитание" << endl;
cout << "3)Умножение" << endl;
cout << "4)Деление" << endl;
cout << "\nВВОД: ";
cin >> x;
cout << "Введите первое число: ";
cin >> num_1;
cout << "Введите второе число: ";
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
    default: cout << "Неверная команда! ПИДР!";
}


return 0;
}
