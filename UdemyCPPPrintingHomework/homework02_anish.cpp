#include <iostream>
using namespace std;

void p1();
void p2();
void p3();
void p4();
void p5();

int main() {
	p1();
	cout << "--------------" << endl;
	p2();
	cout << "--------------" << endl;
	p3();
	cout << "--------------" << endl;
	p4();
	cout << "--------------" << endl;
	p5();
	cout << "--------------" << endl;
}

void p1() {
	cout << "*" << endl;
	cout << "* *" << endl;
	cout << "* * *" << endl;
	cout << "* * * *" << endl;
	cout << "* * * * *" << endl;
}

void p2() {
	cout << "        *       " << endl;
	cout << "      * * *     " << endl;
	cout << "    * * * * *    " << endl;
	cout << "  * * * * * * *  " << endl;
	cout << "* * * * * * * * *" << endl;
}

void p3() {
	cout << "  *  " << endl;
	cout << " *** " << endl;
	cout << "*****" << endl;
	cout << " *** " << endl;
	cout << "  *  " << endl;
}

void p4() {
	cout << "        1        " << endl;
	cout << "      2 3 2      " << endl;
	cout << "    3 4 5 4 3    " << endl;
	cout << "  4 5 6 7 6 5 4  " << endl;
	cout << "5 6 7 8 9 8 7 6 5" << endl;
}

void p5() {
	cout << "           1          " << endl;
	cout << "       1   2   1      " << endl;
	cout << "     1   3   3   1    " << endl;
	cout << "   1   4   6   4   1  " << endl;
	cout << " 1   5   10  10  5   1" << endl;
}