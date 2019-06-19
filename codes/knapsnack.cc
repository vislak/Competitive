#include<iostream>

using namespace std ;
int cval = 0, cw = 0;
int knapsnack(int*wt, int*val, int n , int wl,int**dp) {

	if (n == 0||wl==0)return 0;
	if(dp[n][wl]>=0)return dp[n][wl];
	if(wt[n-1]>wl)knapsnack(wt, val, n - 1, wl,dp);
        int a = val[n - 1] + knapsnack(wt, val, n - 1, wl - wt[n-1],dp);
		int b = knapsnack(wt, val, n - 1, wl,dp);
		dp[n][wl]=max(a,b);
		return max(a, b);
	 


}
int main() {
	int n;
	cin >> n;
	int*wt = new int[n];
	int*val = new int [n];
	for (int i = 0; i < n; i++) {
		cout << "enter weigth ";
		cin >> wt[i];
	}
	for (int i = 0; i < n; i++)cin >> val[i];
	int wl;
	cout << "enter weight limit ";
	cin >> wl;

	int **dp=new int*[n+1];
	for(int k=0;k<=n;k++){
		dp[k]=new int[wl+1];
		for(int j=0;j<=wl;j++)dp[k][j]=-1;
	}
	int a = knapsnack(wt, val, n, wl,dp);
	cout << a;

}