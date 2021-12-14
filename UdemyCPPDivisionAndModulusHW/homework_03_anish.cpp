using namespace std;
#include<iostream>

int h3main() {
	int a, b;
	cin >> a >> b;

	int multiple = a / b;
	int remainder = a - (b * multiple);
	cout << remainder << endl;
}