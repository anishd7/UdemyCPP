using namespace std;
#include <iostream>

int h3main() {
	int n, m;
	cin >> n >> m;

	if (n < 0 && m >= 0) {
		int i = -1;
		while (i >= n) {
			int j = 1;
			if (m == 0) {
				j = 0;
			}
			while (j <= m) {
				cout << i << " * " << j << " = " << i * j << endl;
				j++;
			}
			i--;
		}
	}
	else if (n >= 0 && m < 0) {
		int i = 1;
		if (n == 0) {
			i = 0;
		}
		while (i <= n) {
			int j = -1;
			while (j >= m) {
				cout << i << " * " << j << " = " << i * j << endl;
				j--;
			}
			i++;
		}
	}
	int i = 1;
	if (n == 0) {
		i = 0;
	}
	while (i <= n) {
		int j = 1;
		if (m == 0) {
			j = 0;
		}
		while (j <= m) {
			cout << i << " * " << j << " = " << i * j << endl;
			j++;
		}
		i++;
	}
	return 0;
}