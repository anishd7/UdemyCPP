using namespace std;
#include <iostream>

int h1main() {
	int n;
	cin >> n;

	while (n > 0) {
		string input;
		cin >> input;
		if (input == "no" || input == "on" ||
			input == "No" || input == "oN" ||
			input == "nO" || input == "On" ||
			input == "NO" || input == "ON") {
			cout << input << " " << endl;
		}
		n--;
	}
	return 0;
}