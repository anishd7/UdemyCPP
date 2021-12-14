#include <iostream>
using namespace std;

void accumulate_arr(int arr[], int len) {
	if (len == 1)
		return;
	accumulate_arr(arr, len - 1);
	arr[len - 1] += arr[len - 2];
}

int main9() {
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	accumulate_arr(arr, 6);
	for (int i = 0; i < 6; ++i)
		cout << arr[i] << " ";
	cout << endl;

	int arr2[] = { 1, 8, 2, 10, 3 };
	accumulate_arr(arr2, 5);
	for (int i = 0; i < 5; ++i)
		cout << arr2[i] << " ";
	cout << endl;
	return 0;
}