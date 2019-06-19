#include<iostream>
using namespace std;


#include<vector>
#include<algorithm>
int LIS(int*arr,int*dp,int n){
	if(n==0)return 0;
	if(n==1)return 1;
	dp[0]=1;
	for(int i=1;i<n;i++){
		int j=i-1;
		int max=0;
		while(j>=0){
			if(arr[i]>arr[j]&&max<dp[j]){
              max=dp[j];
			}
			dp[i]=max+1;
			j--;
		}

	}
	
}



int main(){
char a[100];
cin>>a;
int size =sizeof(a)/sizeof(a[0]);
cout<<strlen(a);

}