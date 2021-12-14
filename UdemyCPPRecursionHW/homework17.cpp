#include <iostream>
using namespace std;

long long fibonacci(int n, long long dp[]) {
	if (dp[n] > 0)
		return dp[n];
	fibonacci(n - 1, dp);
	dp[n] = dp[n - 1] + dp[n - 2];
	return dp[n];
}

int main19() {
	long long dp[10000]{};
	dp[0] = 1, dp[1] = 1;
	for(int i=0; i<=50; ++i)
		cout << i << ": "<< fibonacci(i, dp) << endl;
	cout << endl;
	return 0;
}