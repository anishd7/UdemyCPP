#include<iostream>
using namespace std;

int prefix_sum(int arr[], int n, int len, int sp = 0) {
	// start from left and recurse right
	if (sp == n || sp == len)
		return 0;
	return arr[sp] + prefix_sum(arr, n, len, sp + 1);
}

int prefix_sum_v2(int arr[], int count) {
	// start from right and recurse left
	if (count == 0)
		return 0;
	return arr[count - 1] + prefix_sum_v2(arr, count - 1);
}

int main13() {
	int arr[] = { 1, 3, 4, 6, 7 };
	cout << prefix_sum(arr, 3, 5) << endl;
	cout << prefix_sum_v2(arr, 3) << endl;

	int arr2[] = { 1, 2, 3 };
	cout << prefix_sum(arr2, 3, 3) << endl;
	cout << prefix_sum_v2(arr2, 3) << endl;

	int arr3[] = { 1, 2, 3 };
	cout << prefix_sum(arr3, 5, 3) << endl;

	int arr4[] = { 5, 4, 3, 2, 1};
	cout << prefix_sum_v2(arr4, 2) << endl;

	return 0;
}