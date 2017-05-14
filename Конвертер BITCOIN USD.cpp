#include <iostream>

using namespace std;

int main() {

int operation;
double result = 0, num_1 = 0, num_2 = 0;

cout << "kakuy operaciy vipolnit (exit - 0) " << endl;
cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
cout << "1)USD => BITCOIN" << endl;
cout << "2)BITCOIN => USD" << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;
cout << "ENTER: ";
cin >> operation;

switch(operation) {
case 1:
num_2 = 245;
  cout << "Enter score USD: ";
  cin >> num_1;
  result = (double)num_1 / (double)num_2;
  cout << "\n___________________\n" << num_1 << " USD " << "= " << result << " BITCOIN" << endl;
  break;
  case 2:
  num_2 = 245;
  cout << "Enter score BITCOIN: ";
  cin >> num_1;
  result = (double)num_1 * (double)num_2;
  cout << "\n___________________\n" << num_1 << " BITCOIN " << "= " << result << " USD" << endl;
  break;
}


  return 0;
}
