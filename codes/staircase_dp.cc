#include<iostream>
using namespace std;

int ways(int n,int *dp ){
	if(n==0||n==1)return 1;
	if(n==2)return 2;
	if(n<0)return 0;
	if(dp[n]>0)return dp[n];

	dp[n]=ways(n-1,dp)+ways(n-2,dp)+ways(n-3,dp);
	return dp[n];
}


int main(){
	int n;
	
	cin>>n;
	int *dp=new int[n+1];
for (int i = 0; i <=n; ++i)
{
dp[i]=0;
/* code */
}
	int steps=ways(n,dp);
	cout<<steps;

}