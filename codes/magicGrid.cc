#include<iostream>
using namespace std;
int maxi = 100000;

int Iterative(int**arr, int m , int n) {
	int **dp = new int*[m];
	for (int i = 0; i < n; i++) {
		dp[i] = new int [n];
	}
	dp[m - 1][n - 1] = arr[m = 1][n - 1];

	//Intilaise last coloumn;

	for (int i = m - 2; i >= 0; i--) {
		dp[i][n - 1] = dp[i + 1][n - 1] + arr[i][n - 1];

	}
// Intialises last row ;
	for (int i = n - 2; i >= 0; i--) {
		dp[m - 1][i] = dp[m - 1][i + 1] + arr[m - 1][i];
	}
	for( int i=n-2;i>=0;i--){
		for(int j=m-2;j>=0;j++){
			dp[j][i]=min(dp[j+1][i],min(dp[j+1][i+1],dp[j][i+1]))+arr[j][i];
		}
	}
	int ans=dp[0][0];
	delete []dp
	return ans;



}


int magic(int**arr, int si, int sj, int ei, int ej) {
	if (si == ei && sj == ej)return arr[si][sj];

	int a = magic(arr, si + 1, sj, ei, ej);
	int b = magic(arr, si, sj + 1, ei, ej);
	if (si > ei || sj > ej)return maxi;
	return arr[si][sj] + min(a, b);

}
int main() {
	int r, c ;
	cin >> r >> c;
	int ** input;
	input = new int*[r];
	for (int i = 0; i < r; i++)
		input[i]  = new int[c];

	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			cin >> input[i][j];


	int a = magic(input, 0, 0, r - 1, c - 1);
	cout << a;
}
