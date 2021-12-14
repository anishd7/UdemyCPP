using namespace std;
#include <iostream>

int h1main() {
	int a, b;
	cin >> a >> b;

	bool aIsEven = a % 2 == 0;
	bool bIsEven = b % 2 == 0;
	int result;
	if (!(aIsEven || bIsEven)) {
		result = a * b;
	}
	else if (aIsEven && bIsEven) {
		if (!b) {
			cout << "Cannot divide by 0" << endl;
			return 0;
		}
		result = a / b;
	}
	else if (!aIsEven) {
		result = a + b;
	}
	else {
		result = a - b;
	}
	cout << result << endl;
	return 0;
}