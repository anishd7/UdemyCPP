using namespace std;
#include <iostream>

int h4main() {
	int x, i;
	cin >> x;
	while (x > 0) {
		i = 0;
		while (i < x) {
			cout << "*";
			i++;
		}
		cout << "" << endl;
		x--;
	}
	return 0;
}
