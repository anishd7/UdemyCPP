#include <iostream>
using namespace std;

void printTriangles(int n) {
	/*
	*****
	****
	***
	**
	*
	*/
	if (!n)
		return;
	for (int i = 0; i < n; ++i)
		cout << "*";
	cout << endl;
	printTriangles(n - 1);
}

void printTrianglesReverse(int level, int &n) {
	if (level > n)
		return;
	for (int i = 0; i < level; ++i)
		cout << "*";
	cout << endl;
	printTrianglesReverse(level + 1, n);
}

void printTrianglesReverseSmart(int n) {
	if (!n)
		return;
	printTrianglesReverseSmart(n - 1);
	for (int i = 0; i < n; ++i)
		cout << "*";
	cout << endl;
}

int main1()
{
	printTrianglesReverseSmart(5);
	cout << endl;
	printTrianglesReverseSmart(1);
	cout << endl;
	printTrianglesReverseSmart(3);
	cout << endl;
	printTrianglesReverseSmart(0);
	return 0;
}

