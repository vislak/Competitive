#include<iostream>

using namespace std ;

int  subseqence(int *arr, int n,int p ){
	if(n==0)return 1;
	if(n==1)return 1;
	int l =subseq(arr,n-1);
	if(arr[n-1]>arr[p])[p=n-1;l=l+1;
	return l;
}
int main(){
	int n ;
	cin>>n;
	int arr[n];
	int visited[n];

	for(int i=0;i<n;i++){
	visited[i]=0;
	}
	cout<<subsequence(arr,n,0);
	
}