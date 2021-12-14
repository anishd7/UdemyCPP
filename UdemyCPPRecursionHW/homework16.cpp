#include <iostream>
using namespace std;

const int drow[] = { 1, 1, 0 };
const int dcol[] = { 0, 1, 1 };
int path_sum(int grid[100][100], int row, int col, int ROWS, int COLS) {
	if (row == ROWS - 1 && col == COLS - 1)
		return grid[ROWS - 1][COLS - 1];
	int ni = row, nj = col;
	int maxval = INT_MIN;
	for (int i = 0; i < 3; ++i) {
		int nrow = drow[i] + row;
		int ncol = dcol[i] + col;
		if (nrow == ROWS || ncol == COLS)
			continue;
		if (grid[nrow][ncol] > maxval) {
			maxval = grid[nrow][ncol];
			ni = nrow, nj = ncol;
		}
	}
	/*if (ni == row && nj == col)
		return grid[row][col];
	*/
	return grid[row][col] + path_sum(grid, ni, nj, ROWS, COLS);
}

int main18() {
	int grid[100][100] = {};
	int rows, cols;
	cin >> rows >> cols;
	for (int i = 0; i < rows; ++i)
		for (int j = 0; j < cols; ++j)
			cin >> grid[i][j];
	cout << path_sum(grid, 0, 0, rows, cols) << endl;
	return 0;
}