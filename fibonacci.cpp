#include<bits/stdc++.h>
using namespace std;

int memo[1000];

int fibonacci(int n) {

	/// TOP DOWN APPROACH _ GENERALLY CALLED MEMOIZATION


	if (n <= 1)
		return n;
	if (memo[n] != -1)
		return memo[n];
	int ans = fibonacci(n - 1) + fibonacci(n - 2);
	memo[n] = ans;
	return ans;

}

int fib(int n) {
	// BOTTOM UP APPROACH 
	int dp[1000] = {} ;
	dp[0] = 0 ;
	dp[1] = 1 ;

	for (int curnum = 2 ; curnum <= n ; curnum++) {
		dp[curnum] = dp[curnum - 1] + dp[curnum - 2];

	}

	return dp[n];

}

int main()
{

	for (int i = 0; i < 1000; i++)
		memo[i] = -1;
	int n;
	cin >> n;
	int ans = fib(n);
	cout << ans;




	return 0;
}

Hi i am [Arjun Soota](https://github.com/arjunsoota/)
