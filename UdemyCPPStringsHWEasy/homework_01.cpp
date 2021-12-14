#include <iostream>
using namespace std;

int main1() {
	string input, str;
	cin >> input >> str;
	bool isPrefix = 1;
	for (int i = 0; i < str.size(); ++i) {
		if (i == input.size() || input[i] != str[i]) {
			isPrefix = 0;
			break;
		}
	}
	if (isPrefix) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}