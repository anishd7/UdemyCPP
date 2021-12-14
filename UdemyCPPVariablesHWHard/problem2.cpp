#include <iostream>
using namespace std;

int oyveymain() {
	// read a and b
	// if b == -1, print 2*a + 1
	// if b == 1, print a**2
	// do it without if statements, in one line

	/*
	0 -1 1
	0 1 0
	
	1 -1 3
	1 1 1
	
	2 -1 5
	2 1 4
	
	3 -1 7
	3 1 9

	4 -1 9
	4 1 16

	5 -1 11
	5 1 25

	6 -1 13
	6 1 36

	7 -1 15
	7 1 49

	b = -1: 1, 3, 5, 7, 9, 11, 13, 15
	b = 1:  0, 1, 4, 9, 16, 25, 36, 49

	if b == -1: (a+1)^2 - (a)^2
	if b == 1: (a+1)^2 - (2a + 1)

	(a+1)^2 - (bool1)a^2 - (bool2)(2a+1) where bool1 and bool2 are in [0, 1]

	if b == -1, I need bool1 = 1 and bool2 = 0
	if b == 1, I need bool1 = 0, and bool2 = 1


	(-1+1)/2 = 0, (-1-1) / -2 = 1
	(1+1)/2 = 1, (1-1)/-2 = 0

	bool1 = (b-1)/-2
	bool2 = (b+1)/2
	*/

	int b;
	cin >> b;

	int bool1, bool2;

	bool1 = (b - 1) / -2;
	bool2 = (b + 1) / 2;

	for (int a = 0; a < 8; a++) {
		int res = ((a + 1) * (a + 1)) - (bool1 * (a * a)) - (bool2 * (2 * a + 1));
		cout << res << " ";
	}

	cout << endl;
	return 0;
}