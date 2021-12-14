#include <iostream>
using namespace std;

int array_sum(int arr[], int len) {
	if (len == 1)
		return arr[len - 1];
	return arr[len - 1] + array_sum(arr, len - 1);
}

int main6() {
	int arr[] = { 1, 2, 3, 4, 5 };
	cout << array_sum(arr, 5) << endl;

	int arr2[] = { 5, 4, 3, 2, 1 };
	cout << array_sum(arr2, 5) << endl;

	int arr3[] = { 3, 1, 10, 4, 7 };
	cout << array_sum(arr3, 5) << endl;

	int arr4[] = { -5 };
	cout << array_sum(arr4, 1) << endl;

	int arr5[] = { 1, 8, 2, 10, 3 };
	cout << array_sum(arr5, 5) << endl;

	return 0;
}