#include <iostream>
using namespace std;

int my_pow(const int& value, int p) {
	if (!p)
		return 1;
	return value * my_pow(value, p - 1);
}

int main4() {
	for (int i = -10; i <= 10; ++i)
		cout << my_pow(i, 3) << endl;
	return 0;
}