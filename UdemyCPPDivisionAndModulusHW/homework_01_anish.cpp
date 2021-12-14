using namespace std;
#include<iostream>

int h1main() {
	double a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	double avg = (a + b + c + d + e) / 5;
	cout << avg << endl;

	double res2 = (a + b + c) / (d + e);
	cout << res2 << endl;

	double avg1 = (a + b + c) / 3;
	double avg2 = (d + e) / 2;

	cout << avg1 / avg2 << endl;
	cout << (2.0 / 3) * res2 << endl;

	return 0;
	// the relation between res2 and (avg1 / avg2) is that (avg1 / avg2) = (2/3)res2
}