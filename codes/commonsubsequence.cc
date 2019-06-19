#include<iostream>
using namespace std;
#include<string.h>
/*int LCS(string s1, string s2, int l1, int l2), int**dp {
	if (l1 == 0 || l2 == 0) {
		return 0;
	}
	if (dp[l1][l2] >= 0)return dp[l1][l2];
	if (s1[0] == s2[0]) {
		return 1 + LCS(s1.substr(1, l1 - 1), s2.substr(1, l2 - 1), l1 - 1, l2 - 1);
	} else
		dp[]
		return max(LCS(s1.substr(1, l1 - 1), s2, l1 - 1, l2), LCS(s1, s2.substr(1, l2 - 1), l1, l2 - 1));



}*/
void Iterative(int**dp, string s1, string s2, int m, int n) {

	for (int i = 0; i <= m; i++){dp[i][0] = 0;}
	for (int i = 0; i <= n; i++){dp[0][i] = 0;}

   int min1,min2;
    min =-1,min2=-1;
   cnt=0;
   sum=0;

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (s1[m - i] == s2[n - j]) {
                   cnt++;
                   min=s1[m-i];
                   min2=s1[m-i];
                   
				dp[i][j] = 1 + dp[i - 1][j - 1];

			}
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);

		}
		
	}
  cout<<dp[m][n];
}
int main() {
	string s1, s2;
	cin >> s1 >> s2;

	int l1 = s1.length();
	int l2 = s2.length();
	int **dp = new int* [l1 + 1];
	for (int i = 0; i <= l1; ++i)
	{
		dp[i] = new int[l2]; /* code */
	}
	Iterative(dp,s1,s2,l1,l2);

}