#include <iostream>
using namespace std;

int main() {
	// int n;
	// cin >> n;

	// (n+1)*n/2 when even
	// (n+1)*n/2 + (n/2)+1
	// 1 2 3 4 5 6 7 = (1+7) + (2+6) + (3+5) + 4 = (1+7)*3 + 4 = (1+n)*n/2 + n/2 + 1 = (n+2)*n/2 + 1

	// 9/2 = 4 8/2 = 4 4-4 = 0
	// 8/2 = 4 7/2 = 3 4-3 = 1
	// formula = (n+1)*n/2 + (bool1)(n/2 + 1)
	// where bool1 = (n+1)/2 - (n/2). when n is even, bool1 is 0, so we dont add the extra term. when n is odd, bool1 is 1, so we add the extra term

	int bool1; // = (n + 1) / 2 - (n / 2);
	int result; //= (n + 1) * (n / 2) + bool1 * (n / 2 + 1);

	for (int n = 0; n < 20; n++) {
		bool1 = (n + 1) / 2 - (n / 2);
		result = (n + 1) * (n / 2) + bool1 * (n / 2 + 1);
		cout << n << " " << result << endl;
	}

}