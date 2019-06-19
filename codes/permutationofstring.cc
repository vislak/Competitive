#include<iostream>
using namespace std;
 void Permute(char arr[],int size ,int be){
 	if(be==size-1){
 		cout<<arr<<endl;
 		return;

 	}
    for(int i=be;i<size;i++){
    	swap(arr[be],arr[i]);
    	Permute(arr,size,be+1);
    	swap(arr[be],arr[i]);
    }
    return;

 }
 int main(){
 	char arr[10];
 	cin>>arr;
 	cout<<endl;
 	int l=strlen(arr);
 	Permute(arr,l,0);
 }