using namespace std;
#include <iostream>

int h2main() {
	int num;
	cin >> num;

	int right1 = num % 10;
	num = num / 10;

	int right2 = num % 10;
	num = num / 10;

	int right3 = num % 10;
	num = num / 10;

	int result = right1 + right2 + right3;
	cout << result << endl;

	return 0;
}