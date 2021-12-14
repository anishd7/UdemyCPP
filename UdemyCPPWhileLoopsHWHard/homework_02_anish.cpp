using namespace std;
#include <iostream>

int main() {
	int n;
	cin >> n;

	double place = 1.0 / 10;
	int tempn = n;
	while (tempn > 0) {
		tempn /= 10;
		place *= 10;
	}
	place = (int)place;
	tempn = n;
	int runningSum = 0;
	while (tempn > 0) {
		runningSum += (tempn % 10) * place;
		place /= 10;
		tempn /= 10;
	}
	cout << runningSum << " " << runningSum * 3;
	return 0;
}

int otherWay() {
	int n;
	cin >> n;

	int result = 0;
	while (n > 0) {
		int digit = n % 10;
		result = result * 10 + digit;
		n /= 10;
	}
	cout << result << " " << result * 3 << endl;
	return 0;
}