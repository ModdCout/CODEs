#include <iostream>

using namespace std;

class Hunter;

class Fox {
private:
	int health = 100;

	friend class Hunter;
};

class Hunter {
public:
	void kill(Fox & f) {
		f.health = 0;
	}
	void hurt(Fox & f) {
		f.health -= 10;
	}
};

int main() {

	


	system("pause");
	return 0;
}