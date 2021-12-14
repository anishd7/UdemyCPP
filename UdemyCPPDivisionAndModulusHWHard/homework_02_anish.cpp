using namespace std;
#include <iostream>

int h2main() {
	int num;
	cin >> num;

	int years = num / 360;
	num -= (360 * years);
	int months = num / 30;
	num -= (30 * months);
	int days = num % 30;

	cout << years << " " << months << " " << days << endl;
	return 0;
}