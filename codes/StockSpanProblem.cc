#include<iostream>
#include<stack>

using namespace std ;

int * stockSpan(int*price,int size){
	int*span=new int[size];
    
     span[0]=1;
    

     int max=price[0];

     for(int i=1;i<size;i++){

     	if(price[i]>max){
     		span[i]=i+1;
     		
     		max=price[i];
     		continue;
     	}
     	if(price[i]<=price[i-1]){
     		span[i]=1;
     		
     		continue;


     	}
     	int pr=span[i-1]+1;
     	
     	int j=i-pr;
     	while(price[j]<price[i]&&j>=0){
     		j=j-span[j-1]-1;


     		
     	}
     	span[i]=i-j;

     }
     return span;



}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];

	}
	int *output=stockSpan(arr,n);
	for(int i=0;i<n;i++){
		cout<<output[i]<<" ";
	}

	}