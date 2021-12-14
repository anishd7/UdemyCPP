#include <iostream>
using namespace std;


int suffix_sum(int arr[], int len, int n) {
	if (!n || len == 0)
		return 0;
	return arr[len - 1] + suffix_sum(arr, len - 1, n - 1);
}

int main12() {
	int arr[] = { 1, 3, 4, 6, 7 };
	cout << suffix_sum(arr, 5, 3) << endl;
	cout << suffix_sum(arr, 5, 1) << endl;
	cout << suffix_sum(arr, 5, 5) << endl;

	int arr2[] = { -1, -3, -4, -6, -7 };
	cout << suffix_sum(arr2, 5, 3) << endl;
	cout << suffix_sum(arr2, 5, 1) << endl;
	cout << suffix_sum(arr2, 5, 5) << endl;

	int arr3[] = { 4 };
	cout << suffix_sum(arr3, 1, 1) << endl;
	cout << suffix_sum(arr3, 1, 2) << endl;
	cout << suffix_sum(arr3, 1, 3) << endl;
	cout << suffix_sum(arr3, 1, 0) << endl;
	return 0;
}