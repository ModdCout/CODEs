#include <iostream>

using namespace std;

class Test {
private:
  int a, b, c;
public:
   void set (int a, int b, int c) {
     this->a = a;
     this->b = b;
     this->c = c;
   }
   void get () {
     cout << "A = " << a << ", B = " << b << ", C = " << c << endl;
   }
};

int main() {
int a, b, c;

cout << "A = ";
cin >> a;
cout << endl;
cout << "B = ";
cin >> b;
cout << endl;
cout << "C = ";
cin >> c;
cout << endl;

Test test;
test.set(a, b, c);
test.get();

  return 0;
}
