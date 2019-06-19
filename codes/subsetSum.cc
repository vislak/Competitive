#include<iostream>
using namespace std;

bool check(int arr[],int n,int k){
	cout<<k<<" ";
	if(k==0){return true;}
	if(n==0)return false;
	int s=arr[0];
	if(s>k)return check(arr+1,n-1,k);

	return (check(arr+1,n-1,k)||check(arr+1,n-1,k-s));
}

int main(){
	int n1;
	cin>>n1;
  int arr[n1];
  for(int i=0;i<n1;i++)cin>>arr[n1];
 
 
  int k=0;
  cin>>k;
  cout<<check(arr,n1,k);


}