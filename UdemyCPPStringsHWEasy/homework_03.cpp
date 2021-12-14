#include<iostream>
using namespace std;

int main() {
	string input, str;
	cin >> input >> str;
	if (input.size() < str.size()) {
		cout << "NO" << endl;
		return 0;
	}
	int stri = 0;
	for (int i = 0; i < input.size(); ++i) {
		if (input[i] == str[stri]) {
			++stri;
			if (stri == str.size())
				break;
		}
		else {
			stri = 0;
			if (input[i] == str[stri])
				++stri;
		}
	}
	if (stri == str.size()) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}