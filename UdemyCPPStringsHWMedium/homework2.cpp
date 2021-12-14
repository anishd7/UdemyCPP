#include <iostream>
using namespace std;

int main2() {
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < (int)a.size(); ++i) {
		if (i == b.size() || a[i] > b[i]) {
			cout << "NO" << endl;
			return 0;
		}
		if (a[i] < b[i])
			break;
	}
	cout << "YES" << endl;
	return 0;
}