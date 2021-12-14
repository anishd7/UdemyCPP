using namespace std;
#include <iostream> 

int main() {
	int n, i;
	double evenSum = 0, oddSum = 0;
	cin >> n;
	i = 1;
	while (i <= n) {
		double x;
		cin >> x;
		if (i % 2 == 0) {
			evenSum += x;
		}
		else {
			oddSum += x;
		}
		i++;
	}
	int evenLength = n / 2;
	int oddLength = n - evenLength;
	cout << oddSum / oddLength << " " << evenSum / evenLength << endl;
	return 0;
}