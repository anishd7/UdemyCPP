using namespace std;
#include <iostream>

int h1main() {
	int num;
	cin >> num;

	// print 100 if number is even
	// print 7 if number is odd

	/*
	1, 100
	0, 7
	need a y = mx + b line function to output 100 or 7. x in this case will be the result of num % 2 == 0, so x = 0 or x = 1. 
	y = 93x + 7?
	*/

	bool x = num % 2 == 0;
	int result = (93 * x) + 7;
	cout << result << endl;
	return 0;
}