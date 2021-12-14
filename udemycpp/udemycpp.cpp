// udemycpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// another test 5
#include <iostream>
using namespace std;

int notmain()
{
	int n, m, w;
	cin >> n >> m >> w;
	// 1 <= A <= N
	// A <= B <= M
	// 1 <= C <= W
	// A + B <= C
	
	/*
	The problem is asking for the count of all TRIPLES, so all combinations of 
	a, b, AND C, such that the conditions are satisfied. 
	*/

	// slow way
	int count = 0;
	for (int i = 1; i <= n; ++i) {
		for (int j = i; j <= m; ++j) {
			for (int k = 1; k <= w; ++k) {
				if (i + j <= k)
					++count;
			}
		}
	}

	int count2 = 0;
	for (int i = 1; i <= n; ++i) {
		for (int j = i; j <= m; ++j) {
			int sum = i + j;
			if (1 <= sum && sum <= w)
				count2 += w - sum + 1;
		}
	}

	cout << count << " " << count2 << endl;
	return 0;
}

/**
	Unrelated code on prefix vs postfix operators:
	int a = 10;
	int b = --a;
	cout << a << " " << b << endl; // 9 9

	a = 10;
	cout << --a << endl; // 9

	cout << a << endl; // 9

	a = 10;
	b = a--;
	cout << a << " " << b << endl; // 9 10

	a = 10;
	cout << a-- << endl; // 10

	cout << a << endl; // 9

	When the unary operator (operates on one operand instead of needing 2 operands) comes before the variable, it means to perform the operation in memory first, then do the assignment. Even if there is no explicit assignment, think of it as the variable
	being modified in memory first then returned to whatever process is using it.

	When the unary operator comes after the variable, the process gets the initial value of the variable, then the variable is modified in memory.

	ex) ++a where a = 7 means update a in memory to a+1 = 8. So a is now 8 and 8 will be returned to the process
	a++ where a = 7 means return a = 7 to the process first, and then modify a in memory to a+1 AFTER. 7 is still returned to the process until a is used again.
	*/