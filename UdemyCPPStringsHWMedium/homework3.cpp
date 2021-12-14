#include <iostream>
using namespace std;

int main3() {
	string input;
	cin >> input;
	string longer = input;
	string shorter = "5555";
	if (longer.size() < shorter.size()) {
		string temp = longer;
		longer = shorter;
		shorter = temp;
	}
	int carry = 0, shortIdx = shorter.size() - 1;
	string result = "";
	for (int i = longer.size() - 1; i >= 0; --i) {
		int val = longer[i] - '0';
		val += carry;
		if (shortIdx >= 0)
			val += shorter[shortIdx--] - '0';
		int digit = val % 10;
		carry = val / 10;
		result = (char)('0' + digit) + result;
	}
	if (carry)
		result = '1' + result;
	cout << result << endl;
	return 0;
}