using namespace std;
#include <iostream>
#include <string>

int main2() {
	int arr[100][100];
	int row, col;
	cin >> row >> col;
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			cin >> arr[i][j];

	int ldsum = 0, rdsum = 0, lrsum = 0, lcolsum = 0;
	int ldrow = 0, ldcol = 0, rdrow = 0, rdcol = col - 1;
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			// left diag sum
			if ((ldrow == i && ldcol == j) || (i == ldrow + 1 && j == ldcol + 1)) {
				ldsum += arr[i][j];
				++ldrow, ++ldcol;
			}

			// right diag sum
			if ((rdrow == i && rdcol == j) || (i == rdrow + 1 && j == rdcol - 1)) {
				rdsum += arr[i][j];
				++rdrow, --rdcol;
			}

			// last row sum
			if (i == row - 1)
				lrsum += arr[i][j];

			// last col sum
			if (j == col - 1)
				lcolsum += arr[i][j];
		}
	}

	cout << ldsum << " " << rdsum << endl;
	cout << lrsum << " " << lcolsum << endl;
	return 0;
}