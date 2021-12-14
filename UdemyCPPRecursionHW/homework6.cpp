#include <iostream>
using namespace std;

void arr_increment(int arr[], int len) {
	if (len == 0)
		return;
	arr[len - 1] += len - 1;
	arr_increment(arr, len - 1);
}

int main8() {
	int arr[] = { 1, 2, 5, 9 };
	arr_increment(arr, 4);
	for (int i = 0; i < 4; ++i)
		cout << arr[i] << " ";
	cout << endl;

	int arr2[] = { 1, 8, 2, 10, 3 };
	arr_increment(arr2, 5);
	for (int i = 0; i < 5; ++i)
		cout << arr2[i] << " ";
	cout << endl;
	return 0;
}