#include <iostream>
#include <vector>

using namespace std;

int main(){

bool happy = true;
int age;
cout << "Enter your age:  ";
cin >> age;
if (age > 18) {
    cout << " Yor age is bigger than 18" << endl;
}
else if (age == 18) {
    cout << "Your age is 18!";
}
else if (age == 17) {
        if (happy == true)
        cout << "Your are happy!" << endl;
        cout << "Nu pochti sovershennoletny!";
    }
else {
    cout << "Age is less then 18 " << endl;
}

return 0;
}
