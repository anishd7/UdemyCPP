using namespace std;
#include <iostream>

int h3main() {
	int x, tempx, stars;
	cin >> x;
	tempx = x;
	while (tempx > 0) {
		stars = (x + 1) - tempx;
		while (stars > 0) {
			cout << "*";
			stars--;
		}
		cout << "" << endl;
		tempx--;
	}
	return 0;
}