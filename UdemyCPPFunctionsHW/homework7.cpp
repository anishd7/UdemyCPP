#include <iostream>
#include <string>
using namespace std;

string replacePattern(const string& input, const string& pattern, const string& to) {
	// O(n) time complexity for replacement
	// 2n= O(n) space complexity
	string result = "";
	int pi{ 0 };
	string temp = "";
	for (int i = 0; i < input.length(); ++i) {
		temp += input[i];
		if (input[i] == pattern[pi]) {
			++pi;
			if (pi == pattern.length()) {
				pi = 0;
				result += to;
				temp = "";
			}
		}
		else {
			pi = 0;
			result += temp;
			temp = "";
		}
	}
	result += temp;
	return result;
}

int main7() {
	string input, pattern, to;
	input = "aabcabaaad", pattern = "aa", to = "x";
	cout << "Input: " << input << " Pattern: " << pattern << " To: " << to << " Output: " << replacePattern(input, pattern, to) << endl;

	input = "aabcabaaad", pattern = "aa", to = "aaaa";
	cout << "Input: " << input << " Pattern: " << pattern << " To: " << to << " Output: " << replacePattern(input, pattern, to) << endl;

	input = "aabcabaaad", pattern = "aa", to = "";
	cout << "Input: " << input << " Pattern: " << pattern << " To: " << to << " Output: " << replacePattern(input, pattern, to) << endl;

	input = "aabcabaaba", pattern = "aa", to = "x";
	cout << "Input: " << input << " Pattern: " << pattern << " To: " << to << " Output: " << replacePattern(input, pattern, to) << endl;

	input = "aabcabaabaa", pattern = "aa", to = "x";
	cout << "Input: " << input << " Pattern: " << pattern << " To: " << to << " Output: " << replacePattern(input, pattern, to) << endl;

	return 0;
}