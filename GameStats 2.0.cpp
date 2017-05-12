#include <iostream>

using namespace std;

int main(){

unsigned int score = 5000;
cout << "Score: " << score << endl;
//изменение значения переменной
score = score + 100;
cout << "Score: " << score << endl;
//комбинированный оператор присваивания
score + 100;
cout << "Score: " << score << endl;
//операторы инкремента
int lives = 3;
++lives;
cout << "Lives: " << lives << endl;
lives = 3;
lives++;
cout << "Lives: " << lives << endl;
lives = 3;
int bonus = lives++ * 10;
cout << "Lives, bonus = " << lives << " , " << bonus << endl;
lives = 3;
bonus = lives++ * 10;
cout << "Lives, bonus = " << lives << " , " << bonus << endl;
//целочисленное переполнение
score = 4294967295;
cout << "\nScore: " << score << endl;
++score;
cout << "Score: " << score << endl;


  return 0;
}
