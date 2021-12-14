#include <iostream>
using namespace std;

int main4() {
	int n, m;
	cin >> n >> m;
	int arr[100][100];
	
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> arr[i][j];

	int total = 0;
	int i = 0, j = 0;
	int currMaxVal = 1;
	// down, diagonal, right
	int di[3]{ 1, 1, 0 };
	int dj[3]{ 0, 1, 1 };
	while (currMaxVal != INT_MIN) {
		total += arr[i][j];
		currMaxVal = INT_MIN;
		int bi = i, bj = j;
		for (int k = 0; k < 3; ++k) {
			int ni = i + di[k];
			int nj = j + dj[k];
			if (ni < n && nj < m && arr[ni][nj] > currMaxVal) {
				bi = ni, bj = nj;
				currMaxVal = arr[ni][nj];
			}
		}
		i = bi, j = bj;
	}
	cout << total << endl;
	return 0;
}