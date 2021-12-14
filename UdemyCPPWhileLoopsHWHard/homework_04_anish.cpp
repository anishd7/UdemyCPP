using namespace std;
#include <iostream>

int h4main() {
	int t;
	cin >> t;

	while (t > 0) {
		int n, iter = 1;
		cin >> n;

		int runningSum = 0;
		int currentNum;
		while (iter <= n) {
			cin >> currentNum;
			int k = 1, runningProduct=1;
			while (k <= iter) {
				runningProduct *= currentNum;
				k++;
			}
			runningSum += runningProduct;
			iter++;
		}
		cout << "Answer: " << runningSum << endl;
		t--;
	}
	return 0;
}