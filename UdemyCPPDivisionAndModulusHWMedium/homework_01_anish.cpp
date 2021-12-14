using namespace std;
#include<iostream>

int h1main() {
	int num;
	cin >> num;

	// using %2
	bool is_even1 = num % 2 == 0;

	// using /2
	bool is_even2 = ((num / 2.0) - (num / 2)) == 0;

	// using %10
	int lastDigit = num % 10;
	bool is_even3 = (lastDigit == 0) || (lastDigit == 2) || (lastDigit == 4) || (lastDigit == 6) || (lastDigit == 8);

	cout << is_even1 << endl;
	cout << is_even2 << endl;
	cout << is_even3 << endl;

	return 0;
}