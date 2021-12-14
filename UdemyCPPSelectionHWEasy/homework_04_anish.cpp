using namespace std;
#include <iostream>

int h4main() {
	int x, a, b, c, d, e;
	cin >> x;
	cin >> a >> b >> c >> d >> e;

	bool isless1 = a <= x;
	bool isless2 = b <= x;
	bool isless3 = c <= x;
	bool isless4 = d <= x;
	bool isless5 = e <= x;

	int numLessThanX = isless1 + isless2 + isless3 + isless4 + isless5;
	int numGreaterThanX = 5 - numLessThanX;
	cout << numLessThanX << " " << numGreaterThanX << endl;
	return 0;
}