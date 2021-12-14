using namespace std;
#include <iostream>

int h3main() {
	int n;
	cin >> n;
	int runningSum = 0;
	while (n > 0) {
		runningSum += 3;
		if (runningSum % 12 > 0) {
			cout << runningSum << " ";
			n--;
		}
	}
	return 0;
}