using namespace std;
#include<iostream>

int main() {
	/**
	My answer to homework 3: 
	F
	T
	T
	T
	T
	T
	T
	T
	*/

	int x = 0;
	cout << (1 && 1 || (1 && ++x == 1)) << endl;
	for (int i = (int)'a'; i < (int)'z' + 1; i++) {
		cout << i << " " << (char)i << endl;
	}
}