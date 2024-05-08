// number : 17626
// description : Four Squares
// date : 2024.05.02

#include <iostream>
#include <math.h>
using namespace std;

int dp[50001];

int main() {
	int n;
	scanf("%d", &n);

	dp[1] = 1;

	for(int i = 1; i <= n; i++){
		dp[i] = dp[1] + dp[i-1];
		for(int j = 2; j*j <= i; j++){
			dp[i] = min(dp[i], 1 + dp[i - j*j]);
		}
	}

	printf("%d\n", dp[n]);

	return 0;
}