#include <iostream>
using namespace std;

int arr_max(int arr[], int len) {
	if (len == 1)
		return arr[len - 1];
	return max(arr[len - 1], arr_max(arr, len - 1));
}

int main5() {
	int arr[] = { 1, 2, 3, 4, 5 };
	cout << arr_max(arr, 5) << endl;

	int arr2[] = { 5, 4, 3, 2, 1 };
	cout << arr_max(arr2, 5) << endl;

	int arr3[] = { 3, 1, 10, 4, 7 };
	cout << arr_max(arr3, 5) << endl;

	int arr4[] = { -5 };
	cout << arr_max(arr4, 1) << endl;

	int arr5[] = { 1, 8, 2, 10, 3 };
	cout << arr_max(arr5, 5) << endl;

	return 0;
}