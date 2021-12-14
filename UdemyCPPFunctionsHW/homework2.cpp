#include<iostream>
using namespace std;

// my implementation, the int i is just a fake parameter so i could test a different function without
// commenting this one out
string reverse_str(const string& str, int i) {
	string result = "";
	for (int i = str.size() - 1; i >= 0; --i)
		result += str[i];
	return result;
}

string reverse_str(const string& str) {
	string result = str;
	int left = 0, right = result.length() - 1;
	while (left < right) {
		char temp = result[left];
		result[left] = result[right];
		result[right] = temp;
		++left, --right;
	}
	return result;
}

int main2() {
	string a = "anish";
	string r = reverse_str(a);
	cout << a << " " << r << endl;
	return 0;
}