using namespace std;
#include <iostream>

int h1main() {
	int n;
	cin >> n;

	int stars, spaces;
	int iter = 1, row;
	while (iter <= 2*n) {
		row = iter;
		if (iter > n) {
			row = (n) - (iter % (n + 1));
		}
		stars = 2 * row - 1;
		spaces = n - row;
		int j = 0;
		while (j < spaces) {
			cout << " ";
			j++;
		}
		j = 0;
		while (j < stars) {
			cout << "*";
			j++;
		}
		cout << endl;
		iter++;
	}
	return 0;
}