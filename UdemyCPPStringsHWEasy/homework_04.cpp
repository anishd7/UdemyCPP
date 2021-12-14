#include<iostream>
using namespace std;

int main4() {
	string input, str;
	cin >> input >> str;
	int stri = 0;
	for (int i = 0; i < input.size(); ++i) {
		if (input[i] == str[stri]) {
			++stri;
			if (stri == str.size())
				break;
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