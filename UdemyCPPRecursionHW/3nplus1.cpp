#include <iostream>
using namespace std;

void f(int n) {
	cout << n << " ";
	if (n == 1)
		return;
	if (n % 2 == 0)
		return f(n / 2);
	return f(3 * n + 1);
}

int main2() {
	f(5);
	cout << endl;
	f(6);
	cout << endl;
	f(9);
	cout << endl;
	return 0;
}