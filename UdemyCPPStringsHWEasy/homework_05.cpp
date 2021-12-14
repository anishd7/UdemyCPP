#include <iostream>
using namespace std;

int main5() {
	string s;
	cin >> s;
	int cursor = 0;
	for (;cursor<6;++cursor)
		if (s[cursor] != '0') {
			break;
		}
	int result = 0;
	int digit = 0;
	for (; cursor < 6; ++cursor) {
		if (cursor == s.size())
			break;
		digit = s[cursor] - '0';
		result = result * 10 + digit;
	}
	cout << result << " " << result * 3 << endl;
	return 0;
}