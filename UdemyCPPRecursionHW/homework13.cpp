#include <iostream>
using namespace std;

bool isPrefix(string& main, string& prefix, int ml, int pl, int sp = 0) {
	if (pl > ml)
		return false;
	if (sp == pl)
		return true;
	return (main[sp] == prefix[sp]) && isPrefix(main, prefix, ml, pl, sp + 1);
}

int main15() {
	string main, prefix;
	main = "abcdefgh";
	prefix = "abcd";
	cout << isPrefix(main, prefix, 8, 4) << endl;

	main = "abcdefgh";
	prefix = "";
	cout << isPrefix(main, prefix, 8, 0) << endl;

	main = "abcdefgh";
	prefix = "a";
	cout << isPrefix(main, prefix, 8, 1) << endl;

	main = "abcdefgh";
	prefix = "ad";
	cout << isPrefix(main, prefix, 8, 2) << endl;

	main = "abcdefgh";
	prefix = "abcdefgh";
	cout << isPrefix(main, prefix, 8, 8) << endl;

	main = "abcdefgh";
	prefix = "abcdefghi";
	cout << isPrefix(main, prefix, 8, 9) << endl;

	main = "abcdefgh";
	prefix = "abcdefg";
	cout << isPrefix(main, prefix, 8, 7) << endl;

	main = "abcdefgh";
	prefix = "bcd";
	cout << isPrefix(main, prefix, 8, 3) << endl;

	return 0;
}