#include <iostream>
#include <string>

using namespace std;

class Mother {
public:
  Mother(){};
  void sayHi() {
    cout << "Hi";
  }
};

class Daughter:public Mother {
public:
  Daughter() {

  }
};

int main() {

Daughter d;
d.sayHi();



  return 0;
}
