#include<iostream>
using namespace std;

int main2() {
	string input, str;
	cin >> input >> str;
	bool isSuffix = 1;
	for (int i = 0; i < str.size(); ++i) {
		if (input.size() - 1 - i < 0 || input[input.size() - 1 - i] != str[str.size() - 1 - i]) {
			isSuffix = 0;
			break;
		}
	}
	if (isSuffix) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}