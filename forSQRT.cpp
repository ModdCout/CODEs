#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int num;

	for (num = 1; num != 0; num++) {
		cin >> num;
		cout << num << " root = " << sqrt((double)num) << endl;
	}

	cout << "\n\n\n";
	system("pause");
	return 0;
}