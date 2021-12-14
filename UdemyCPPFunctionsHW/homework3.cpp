#include <iostream>
using namespace std;


void add2n(double& a, double& b) {
	cout << a + b << endl;
}

void subtract2n(double& a, double& b) {
	cout << a - b << endl;
}

void multiply2n(double& a, double& b) {
	cout << a * b << endl;
}

void divide2n(double& a, double& b) {
	if (!b)
		cout << "Invalid divisor" << endl;
	else
		cout << a / b << endl;
}

int calc() {
	int count = 0;
	int input;
	while (true) {
		cout << "\nMenu Options:\n";
		cout << "\t(1) Add 2 numbers\n";
		cout << "\t(2) Subtract 2 numbers\n";
		cout << "\t(3) Multiply 2 numbers\n";
		cout << "\t(4) Divide 2 numbers\n";
		cout << "\t(5) Exit\n";
		cin >> input;
		if (!(1 <= input && input <= 5)) {
			cout << "Invalid Input" << endl;
			continue;
		}
		else if (input == 5) {
			break;
		}
		double a, b;
		cout << "Enter 2 numbers: ";
		cin >> a >> b;

		if (input == 1) {
			add2n(a, b);
			++count;
		}
		else if (input == 2) {
			subtract2n(a, b);
			++count;
		}
		else if (input == 3) {
			multiply2n(a, b);
			++count;
		}
		else if (input == 4) {
			divide2n(a, b);
			++count;
		}
	}
	return count;
}

int main3() {
	cout << calc() << endl;
	return 0;
}