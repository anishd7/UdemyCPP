#include <iostream>
using namespace std;

int g{};

void f(int &n) {
	cin >> n;
	int k = n;
	++k;
	cout << k << endl;
}

int main() {
	int n = 0;
	f(n);
	cout << n;

	return 0;
}