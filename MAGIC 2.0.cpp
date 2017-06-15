#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

SetConsoleCP(1251);
SetConsoleOutputCP(1251);

time_t t;
srand((unsigned)time(&t));

int magic;
int guess;
int count = 0;

magic = 1 + rand() % 200;
do{
  cout << "Enter magic number: ";
  cin >> guess;
  cout << "\n____________________\n\n";
  if(guess == magic) {
    cout << "****EXELENT****" << endl;
    cout << guess << " it's magic number!" << endl;
      cout << "\nSTEPS :"  << count;
  }
    else {
      cout << "ERROR!" << endl;
      if(guess < magic) {
        cout << "GUESS < MAGIC" << endl;
        cout << "\n____________________\n\n";
      }
      else {
        cout << "GUESS > MAGIC!" << endl;
        cout << "\n____________________\n\n";
      }
      count++;
    }
  }while(guess != magic);



  return 0;
}
