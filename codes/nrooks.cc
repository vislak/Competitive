#include<iostream>
using namespace std ;
 
 void Print(int arr[][100],int n){
 	for(int i=0;i<n;i++){
 		for(int j=0;j<n;j++){
 			cout<<" "<<arr[i][j];
 		}cout<<endl;

 	}
 }

bool isvalid(int arr[][100],int n,int c,int r){
	for(int i =0;i<n;i++){
		if(arr[r][i]==1){return false;}
		if(arr[i][c]==1){return false;}
	}		
return true;
}

bool Placerooks(int arr[][100],int n,int r ,int c){
	if(r==n){
		
		return true
		;
	}
	for(int i=0;i<n;i++){
		if(isvalid(arr,n,i,r)){
			arr[r][i]=1;
			if(Placerooks(arr,n,r+1,0)){
				return true;
			}else arr[i][r]=0;
		}
	}
	Placerooks(arr,n,r+1,0);

}


int main() {
	int arr[100][100]={0};
	int n;
	cin>>n;
	cout<<"i,j for placing rook and -1,-1for auto pilot"<<endl;
	int a,b;
	while(1){
	cin>>a>>b;

	if(a==-1||b==-1)break;
	arr[a][b]=1;}


	int r,c;
	r=0;c=0;
	cout<<"hello"<<endl;
	Print(arr,n);cout<<endl;
	Placerooks(arr,n,r,c);
	Print(arr,n);

}

