#include <iostream>
using namespace std;

int main6() {
	string s;
	cin >> s;
	cout << s[0];
	for (int i = 1; i < s.size(); ++i) {
		if (s[i] != s[i - 1])
			cout << " ";
		cout << s[i];
	}
	return 0;
}