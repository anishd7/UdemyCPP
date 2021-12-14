#include <iostream>
using namespace std;

void set_powers(int arr[], int len = 5, int m = 2) {
	int p{ 1 };
	for (int i = 0; i < len; ++i) {
		arr[i] = p;
		p *= m;
	}
}

int main5() {
	int arr[10000]{};
	int len, m;
	cin >> len >> m;
	set_powers(arr, len, m);
	for (int i = 0; i < len; ++i)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}