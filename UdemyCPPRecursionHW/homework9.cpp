#include <iostream>
using namespace std;

void right_max(int arr[], int len, int start_position = 0) {
	if (start_position == len - 1)
		return;
	right_max(arr, len, start_position + 1);
	arr[start_position] = max(arr[start_position], arr[start_position + 1]);
}

int main11() {
	int arr[]{ 1, 3, 5, 7, 4, 2 };
	right_max(arr, 6);
	for (int i = 0; i < 6; ++i)
		cout << arr[i] << " ";
	cout << endl;

	int arr2[]{ 1, 2, 3, 4, 5 };
	right_max(arr2, 5);
	for (int i = 0; i < 5; ++i)
		cout << arr2[i] << " ";
	cout << endl;

	int arr3[]{ 5, 4, 3 };
	right_max(arr3, 3);
	for (int i = 0; i < 3; ++i)
		cout << arr3[i] << " ";
	cout << endl;
	return 0;
}