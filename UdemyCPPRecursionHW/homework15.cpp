#include <iostream>
using namespace std;

bool isPrime(int currNum, int &num) {
	if (currNum <= 1 && num > 1)
		return true;
	if (currNum <= 1)
		return false;
	if (num != 2 && currNum % 2 == 0)
		return false;
	if (currNum < num && num % currNum == 0)
		return false;
	return isPrime(currNum - 2, num);
}

int count_primes(int start, int end) {
	if (start == end) {
		return (int)isPrime(start, start);
	}
	int mid = (start + end) / 2;
	int left = count_primes(start, mid);
	int right = count_primes(mid + 1, end);
	return left + right;
}

int count_primes_v2(int start, int end) {
	if (start >= end)
		return 0;
	int numPrimes = count_primes_v2(start + 1, end);
	if (isPrime(start, start))
		return numPrimes + 1;
	return numPrimes;
}

int main17() {
	cout << count_primes(10, 20) << endl;
	cout << count_primes(10, 200) << endl;
	cout << count_primes(0, 10) << endl;
	//cout << count_primes(10, 5000000) << endl; 

	//cout << count_primes_v2(10, 20) << endl;
	//cout << count_primes_v2(10, 200) << endl;
	//cout << count_primes_v2(0, 10) << endl;
	//cout << count_primes_v2(10, 5000000) << endl;
	/* 
	*can't compute probably because 5000000 would take 5000000/2 function calls just to check if 5 million is prime.
	* Each function call takes space on the call stack. And the space it takes is dependent on the local variables used per function call.
	* Lets say that each function call took 1 byte (we know this is not true because int currNum is 4 bytes, but this is just a lower bound).
	* That means the total call stack size would be 1 * 2500000 bytes = 2.5Mb. That exceeds call stack size. 
	* 
	*/
	return 0;
}