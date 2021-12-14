#include <iostream>
using namespace std;

void left_max(int arr[], int len) {
	if (len == 1)
		return;
	left_max(arr, len - 1);
	arr[len - 1] = max(arr[len - 1], arr[len - 2]);
}

int main10() {
	int arr[]{ 1, 3, 5, 7, 4, 2 };
	left_max(arr, 6);
	for (int i = 0; i < 6; ++i)
		cout << arr[i] << " ";
	cout << endl;

	int arr2[]{ 5, 1, 4, 7, 10, 9, 13 };
	left_max(arr2, 7);
	for (int i = 0; i < 7; ++i)
		cout << arr2[i] << " ";
	cout << endl;

	int arr3[]{ 7, 8 };
	left_max(arr3, 2);
	for (int i = 0; i < 2; ++i)
		cout << arr3[i] << " ";
	cout << endl;

	int arr4[]{ 1, 2, 3, 4, 5 };
	left_max(arr4, 5);
	for (int i = 0; i < 5; ++i)
		cout << arr4[i] << " ";
	cout << endl;

	int arr5[]{ 5, 4, 3, 2, 1 };
	left_max(arr5, 5);
	for (int i = 0; i < 5; ++i)
		cout << arr5[i] << " ";
	cout << endl;

	return 0;
}