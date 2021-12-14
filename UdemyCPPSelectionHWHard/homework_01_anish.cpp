using namespace std;
#include <iostream>

int h1main() {
	int x;
	int s1, e1, s2, e2, s3, e3;

	cin >> x;
	cin >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;

	int count = 0;
	if (s1 <= x && x <= e1) {
		count++;
	}

	if (s2 <= x && x <= e2) {
		count++;
	}

	if (s3 <= x && x <= e3) {
		count++;
	}

	cout << count << endl;
	return 0;
}