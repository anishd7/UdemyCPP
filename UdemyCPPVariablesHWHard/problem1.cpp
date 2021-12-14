#include <iostream>
using namespace std;

int asdfadfmain() {
	// swap 3 numbers
	int a, b, c, temp;

	cin >> a >> b >> c;

	temp = a;
	a = b;
	b = c;
	c = temp;

	cout << a << " " << b << " " << c << endl;
	return 0;
}