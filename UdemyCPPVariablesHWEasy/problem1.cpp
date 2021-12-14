#include <iostream>
#include <climits>
using namespace std;

int _main()
{
	double a, b;
	cin >> a >> b;
	
	/*
	* 
	* need to check that neither a nor b actually exceeds INT_MAX itself or is less than INT_MIN itself
	* 
	a < 0 and b > 0 a negative b positive
	a < 0 and b < 0 both negative 
	a > 0 and b > 0 both positive 
	a > 0 and b < 0 a positive b negative

	Assume INT_MIN <= a <= INT_MAX and INT_MIN <= b <= INT_MAX

	Both positive:
		addition - need to worry about int overflow a + b > INT_MAX
		subtraction - need to worry about int underflow a - b < INT_MIN. b can be way larger than a and result in underflow
		multiplication - a * b > INT_MAX
		division - b == 0 or a / b > INT_MAX (when b is a fraction < 1, like 0.5)

	Both negative:
		addition - need to worry about int underflow a + b < INT_MIN
		subtraction: (-a) - (-b) = -a + b = b - a . we need to worry about b - a < INT_MIN
		multiplication: a * b > INT_MAX
		division: b==0 or a/b > INT_MAX

	a positive b negative:
		addition: nothing to check
		subtraction: a - (-b) -> a + b . a + b > INT_MAX
		multiplication: a * (-b) . a * b < INT_MIN || a * (-1 * b) > INT_MAX
		division: b==0 or a / b < INT_MIN (when b is a fraction < 1, like -0.5)

	a negative b positive:
		addition: (-a) + b -> b - a . b - a < INT_MIN
		subtraction: (-a) - b . (-a) - b < INT_MIN
		multiplication: (-a) * b -> a * b < INT_MIN
		division: b == 0 or a/b < INT_MIN
	*/

	if (a < INT_MIN || a > INT_MAX || b < INT_MIN || b > INT_MAX) {
		cout << "One of the inputs exceeds integer limits.\n";
		return 0;
	}

	// both positive
	if (a >= 0 && b >= 0) {
		// addition
		if (a > INT_MAX - b || b > INT_MAX - a) {
			cout << "Addition operation will result in integer overflow.\n";
		}
		else {
			cout << a << " + " << b << " = " << a + b << endl;
		}

		// subtraction
		if (a < INT_MIN - b) {
			cout << "Addition operation will result in integer underflow.\n";
		}
		else {
			cout << a << " - " << b << " = " << a - b << endl;
		}

		// multiplication
		if (b != 0 && a > INT_MAX / b) {
			cout << "Multiplication operation will result in integer overflow.\n";
		}
		else {
			cout << a << " * " << b << " = " << a * b << endl;
		}

		// division
		if (b == 0 || a > INT_MAX * b) {
			cout << "Division operation will result in integer overflow\n";
		}
		else {
			cout << a << " / " << b << " = " << a / b << endl;
		}
	}

	// both negative
	else if (a <= 0 && b <= 0) {
		// addition
		if (a < INT_MIN - b || b < INT_MIN - a) {
			cout << "Addition operation will result in integer underflow.\n";
		}
		else {
			cout << a << " + " << b << " = " << a + b << endl;
		}

		// subtraction
		if (b < INT_MIN + (-1 * a)) {
			cout << "Subtraction operation will result in integer underflow.\n";
		}
		else {
			cout << a << " - " << b << " = " << a - b << endl;
		}

		// multiplication
		if ((b != 0 && a > INT_MAX / (-1 * b))) {
			cout << "Multiplication operation will result in integer overflow.\n";
		}
		else {
			cout << a << " * " << b << " = " << a * b << endl;
		}

		// division
		if (b == 0 || a > INT_MAX * (-1 * b)) {
			cout << "Division operation will result in integer overflow\n";
		}
		else {
			cout << a << " / " << b << " = " << a / b << endl;
		}
	}

	// a positive b negative
	else if (a >= 0 && b <= 0) {
		// addition - nothing to check because max negative number is INT_MIN. If a is positive it is as least 0. 0 + INT_MIN = INT_MIN. INT_MIN + any positive number is > INT_MIN. 
		// if a is INT_MAX, INT_MAX + INT_MIN = -1. any a < INT_MAX but > 0 will be between INT_MIN and -1.
		cout << a << " + " << b << " = " << a + b << endl;

		// subtraction
		if (a > INT_MAX - (-1 * b)) {
			cout << "Subtraction operation will result in integer overflow.\n";
		}
		else {
			cout << a << " - " << b << " = " << a - b << endl;
		}

		// multiplication
		if (b != 0 && ((a < INT_MIN / (-1*b)) || (a > INT_MAX / (-1 * b))) ) {
			cout << "Multiplication operation will result in out of bound integers.\n";
		}
		else {
			cout << a << " * " << b << " = " << a * b << endl;
		}

		// division
		if (b == 0) {
			cout << "Division operation will result in out of bound integers\n";
		}
		else {
			cout << a << " / " << b << " = " << a / b << endl;
		}
	}

	// a negative b positive
	else if (a <= 0 && b >= 0) {
		// addition - nothing to check because max negative number is INT_MIN. If a is positive it is as least 0. 0 + INT_MIN = INT_MIN. INT_MIN + any positive number is > INT_MIN. 
		// if a is INT_MAX, INT_MAX + INT_MIN = -1. any a < INT_MAX but > 0 will be between INT_MIN and -1.
		if (b < INT_MIN + a) {
			cout << "Invalid" << endl;
		}
		else {
			cout << a << " + " << b << " = " << a + b << endl;
		}

		// subtraction
		if (a < INT_MIN + b) {
			cout << "Subtraction operation will result in integer underflow.\n";
		}
		else {
			cout << a << " - " << b << " = " << a - b << endl;
		}

		// multiplication
		if (b != 0 && a < INT_MIN / b) {
			cout << "Multiplication operation will result in out of bound integers.\n";
		}
		else {
			cout << a << " * " << b << " = " << a * b << endl;
		}

		// division
		if (b == 0 || a < INT_MIN * b) {
			cout << "Division operation will result in integer underflow\n";
		}
		else {
			cout << a << " / " << b << " = " << a / b << endl;
		}
	}
	return 0;
}
