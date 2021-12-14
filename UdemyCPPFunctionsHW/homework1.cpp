#include <iostream>
using namespace std;

int max(int a, int b, int c) {
	if (a > b && a > c)
		return a;
	else if (b > c)
		return b;
	return c;
}

int max(int a, int b, int c, int d) {
	int m = max(b, c, d);
	if (a > m)
		return a;
	return m;
}

int max(int a, int b, int c, int d, int e) {
	int m = max(b, c, d, e);
	if (a > m)
		return a;
	return m;
}

int max(int a, int b, int c, int d, int e, int f) {
	int m = max(b, c, d, e, f);
	if (a > m)
		return a;
	return m;
}

int main1() {
	cout << max(2, 1, 3) << endl;
	cout << max(5, 4, 3, 2, 1) << endl;
	cout << max(1,1,1,1,1,2) << endl;
	return 0;
}