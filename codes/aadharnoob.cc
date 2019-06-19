#include<iostream>
using namespace std;
int Increase(int n,int*dp){
	if((n/2+n/4+n/3)<n)return n;
    if(dp[n]>0)return dp[n];
      
	dp[n]=Increase(n/2,dp)+Increase(n/3,dp)+Increase(n/4,dp);
	return dp[n];


}

int main(){
	int n ;
	cin>>n;
	int dp[n+1];
	for (int i = 0; i <=n; ++i)
	{
dp[i]=0;/* code */
	}

	int a= Increase(n,dp);
cout<<a;
}