using namespace std;
#include <iostream>

int h3main() {
	double a, b, c;
	cin >> a >> b >> c;

	double answer = -1;
	if (a < 100) {
		answer = a;
	}

	if (answer > 100 || (b < 100 && b > answer)) {
		answer = b;
	}

	if (answer > 100 || (c < 100 && c > answer)) {
		answer = c;
	}

	cout << answer << endl;
	return 0;
}