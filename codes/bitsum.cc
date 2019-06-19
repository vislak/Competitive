#include<iostream>
using namespace std;

int difference(int arr[],int be ,int n){
	int mid=n/2;
	int lsum=0,rsum=0;
	
	for(int i=0;i<n/2;i++){

	}
}


void Bitsum(int arr[], int n,int be , int en) {
	
	if (be >= en ){
	   return;

	int mid = (be + en) / 2;

	if (sum(arr, be, mid) >= sum(arr, mid + 1, en)) {

		arr[be] = 0;
		arr[en] = 1;
		Bitsum(arr, n,be + 1, en - 1);
	}

if(sum(arr,be,mid)<=sum(arr,mid+1,en)){
	arr[be]=1;
	arr[en]=0;
	Bitsum(arr,n,be+1,en-1);

}

}
int main() {

int n;
cin>>n;
int p=2*n;
int arr[p];
for(int i=0;i<p;i++){
	arr[i]=1;

}

cout<<"sum"<<sum(arr,0,3);
/*/
}