#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int left, int len) {
	if (len - 1 <= left)
		return true;
	return (arr[left] == arr[len - 1]) && isPalindrome(arr, left + 1, len - 1);
}

int main14() {
	int arr[]{ 1, 2, 3, 4, 5 };
	cout << isPalindrome(arr, 0, 5) << endl;

	int arr2[]{ 3 };
	cout << isPalindrome(arr2, 0, 1) << endl;

	int arr3[]{ 3, 1 };
	cout << isPalindrome(arr3, 0, 2) << endl;

	int arr4[]{ 3, 3 };
	cout << isPalindrome(arr4, 0, 2) << endl;

	int arr5[]{ 1, 2, 1 };
	cout << isPalindrome(arr5, 0, 3) << endl;

	int arr6[]{ 1, 2, 3, 2, 1 };
	cout << isPalindrome(arr6, 0, 5) << endl;

	/*
	* 0
	* 1
	* 0
	* 1
	* 1
	* 1
	*/

	return 0;
}