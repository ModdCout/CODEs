#include <iostream>

using namespace std;

int main() {

	for (int x = 0; x < 10; x++) {
		cout << " " << x;
	}

	cout << endl;

	int e = 1;
	while (e < 20) {
		cout << " " << e;
		e++;
	}

	cout << endl;

	int b = 0;
	do {
		cout << " " << b;
		b++;
	} while (b < 0);


	return 0;
}
