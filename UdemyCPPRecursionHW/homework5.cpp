#include <iostream>
using namespace std;

double average(int arr[], int len) {
	if (len == 1)
		return arr[len - 1];
	double avg = average(arr, len - 1);
	int sum = avg * (len - 1);
	return (sum + arr[len - 1]) / (double)len;
}

int main7() {
	int arr[] = { 1, 8, 2, 10, 3 };
	cout << average(arr, 5) << endl;

	int arr2[] = { 3, 3, 3 };
	cout << average(arr2, 3) << endl;

	int arr3[] = { 2, 1, 3 };
	cout << average(arr3, 3) << endl;
	return 0;
}