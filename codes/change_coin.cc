#include<iostream>
using namespace std;

int PermuteChange(int m, int *arr, int n) {
	if (m == 0)return 1;
	if (n == 0)return 0;
	int ans1 = PermuteChange(m - 1, arr, n);
	int ans2 = PermuteChange(m, arr + 1, n - 1);
	return ans1 + ans2;
}


int main(){
	cout<<"lets start";
	int n = 0;
	cin >> n;
	int m;cin>>m;
	int arr[m];
	for (int i = 0; i < m; ++i)
	{
		cin >> arr[m];
		/* code */
	}
	int x = PermuteChange(n, arr, m);
cout<<"ans"<<x;
}