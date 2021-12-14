#include <iostream>
using namespace std;

int veymain() {
	int nb, ng, nt;
	cin >> nb >> ng >> nt;

	cout << "Number of boys greater than 25: " << (nb > 25) << endl;
	cout << "ng less than or equal to 30: " << (ng <= 30) << endl;
	cout << "nb > 20 and nt > 2 or ng > 30 and nt > 4: " << (nb > 20 && nt > 2 || ng > 30 && nt > 4) << endl;
	cout << "Either nb < 60 or ng < 70: " << (nb < 60 || ng < 70) << endl;
	cout << "Neither nb >= 60 nor ng >= 70: " << (!(nb >= 60) && !(ng >= 70)) << endl; // can also be written as !((nb >= 60 || ng >= 70))
	cout << "nb is 10 more students than ng: " << (nb == ng + 10) << endl;
	cout << "Difference between nb and ng is more than 10 or nt > 5: " << (nb - ng > 10 || nb - ng < -10 || nt > 5) << endl; // could also use absolute value to simplify this
	cout << "Either nb is 10 more students than ng or ng is 15 more students than nb: " << ((nb == ng + 10 || ng == nb + 15)) << endl;
	return 0;
}
