using namespace std;
#include <iostream>

int h2main() {
	int n;
	cin >> n;
	int i = 0;
	while (i <= n) {
		if (i % 8 == 0) {
			cout << i << " ";
		}
		else if (i % 4 == 0 && i % 3 == 0) {
			cout << i << " ";
		}
		i++;
	}
	return 0;
}