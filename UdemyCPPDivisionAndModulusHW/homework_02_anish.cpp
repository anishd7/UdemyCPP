using namespace std;
#include<iostream>

int h2main() {
	int a, b;
	cin >> a >> b;

	double remainder = a % b;
	double result = remainder / b;
	cout << result << endl;
	return 0;
}