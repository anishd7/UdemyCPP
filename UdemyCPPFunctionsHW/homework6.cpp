#include <iostream>
using namespace std;

bool isPrime(const int& num) {
	// prime numbers must be > 1
	if (num <= 1)
		return 0;

	// if a number is even, it is not prime, the only exception being 2
	if (num > 2 && num % 2 == 0)
		return 0;

	for (int i = 3; i < num; i += 2)
		if (num % i == 0)
			return 0;
	return 1;
}

int nthPrime(int n) {
	if (n-- == 1)
		return 2;
	int currNum = 3;
	while (n > 0) {
		if (isPrime(currNum))
			--n;
		if (n == 0)
			break;
		currNum += 2;
	}
	return currNum;
}

int main6() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cout << nthPrime(i + 1) << " ";
	}
	cout << endl;
	return 0;
}