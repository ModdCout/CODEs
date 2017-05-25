#include <iostream>
#include <stdlib.h>

using namespace std;

const int arr_length = 3;
class arr {
private:
  Type arr[arr_length];
public:
  Arr (Type* a) {
    for(int i = 0; i < arr_length; i++)
      arr[i] = a[i];
  }

  Type getElement (int i) {
    return arr[i];
  }
};

int main() {

int arr[] = {12, 23, 45, 6};
Arr <int> obj(arr);
cout << obj.getElement(2) << endl;

char arr_1[] = {"Mars!"};
arr<char> object(arr_1);
cout << object.getElement(0) << endl;



  return 0;
}
