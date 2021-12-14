#include <iostream>
using namespace std;

int main3() {
	int row, col;
	cin >> row >> col;
	int arr[100][100];

	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			cin >> arr[i][j];

	int c1, c2;
	cin >> c1 >> c2;
	
	for (int i = 0; i < row; ++i) {
		int temp = arr[i][0];
		arr[i][0] = arr[i][col - 1];
		arr[i][col - 1] = temp;
	}

	for (int i=0; i < row; ++i)
		for (int j = 0; j < col; ++j) {
			cout << arr[i][j] << " ";
			if (j == col - 1)
				cout << "\n";
		}
	return 0;
}