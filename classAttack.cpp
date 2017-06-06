#include <iostream>
#include <cmath>

using namespace std;

class Enemy {
protected:
  int attackPower;
public:
  void setAttackPower(int a) {
  }
};

class Ninja: public Enemy {
public:
  void attack() {
    cout << "Ninja - " << attackPower << endl;
  }
};

class Monster: public Enemy {
public:
  void attack() {
    cout << "Monster - " << attackPower << endl;
  }
};

int main() {

Ninja n;
Monster m;
Enemy *e1 = &n;
Enemy *e2 = &m;

e1->setAttackPower(20);
e2->setAttackPower(80);

  return 0;
}
