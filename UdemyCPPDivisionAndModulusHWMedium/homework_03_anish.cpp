using namespace std;
#include <iostream>

int h3main() {
	int num;
	cin >> num;

	num /= 10;
	num /= 10;
	num /= 10;
	int result = num % 10;
	cout << result << endl;
	return 0;
}