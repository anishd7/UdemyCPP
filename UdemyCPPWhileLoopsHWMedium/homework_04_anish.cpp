using namespace std;
#include <iostream>

int h4main() {
	int t, n;
	cin >> t;
	while (t > 0) {
		cin >> n;
		int i = 0, currMin = 0, currNum;
		while (i < n) {
			cin >> currNum;
			if (i == 0) {
				currMin = currNum;
			}
			else if (currNum < currMin) {
				currMin = currNum;
			}
			i++;
		}
		cout << "Minimum: " << currMin << endl;
		t--;
	}
	return 0;
}