#include <iostream>
using namespace std;

bool isPalindromicArray(int arr[], int &n) {
	int left = 0, right = n - 1;
	while (left < right) {
		if (arr[left] != arr[right])
			return 0;
		++left, --right;
	}
	return 1;
}

int main4() {
	int arr[10000];
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	cout << isPalindromicArray(arr, n) << endl;
	return 0;
}