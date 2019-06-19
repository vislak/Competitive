#include<iostream>

using namespace std ;

#define m 1000000007

int CountBtree(int h, int*dp) {
	if (h == 0 || h == 1)return 1;
	if (dp[h] != -1)return dp[h];
	dp[h] = ((  (CountBtree(h - 1, dp) % m)  *  (CountBtree(h - 1, dp) % m)) % m)%m   +   (   (2 % m) *  (CountBtree(h - 1, dp) % m)   * (CountBtree(h - 2, dp) % m) )  % m;
	return dp[h];


}
int main() {

	int n ;
	cin >> n;
	int *dp = new int[n + 1];
	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2; i <= n; i++)dp[i] = -1;

	int count = CountBtree(n, dp);
	cout << "number of Btree" << " " << count;

}