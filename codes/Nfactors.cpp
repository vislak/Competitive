#include<iostream>

#include<cstdlib>
using namespace std;
#define MAX 1000001
/*int  table[11][MAX];*/

/*void Printarra(int*arr,int n){
	for(int i=0;i<n;i++){
		cout<<i<<"->"<<arr[i]<<" ";
	}
}

void Print2d(){
	for(int i=0;i<11;i++){
		for(int j=0;j<11;j++){
			cout<<table[i][j]<<" ";
		}
		cout<<endl;
	}
}*/
int main() {

	int *Pfactor = new int [MAX];

	//Intilsing pfacotr array with ZERO
	for (int i = 0; i < MAX; i++)Pfactor[i] = 0;

     //Filling the array using Sieve technique 
	for (int i = 2; i < MAX; i++) {

		if (Pfactor[i] == 0) {

			Pfactor[i] = 1;

			for (int j = i * 2; j < MAX; j = j + i) {
				Pfactor[j]++;
			}
		}

	}
/*
	cout<<"pfactor finish"<<endl;
	int  table[11][MAX];
	for(int i=0;i<11;i++){
		table[i][0]=0;
		
	}
cout<<"table created"<<endl;


	for(int i=0;i<11;i++){
		cout<<" table fill loop entered"<<endl;

		for(int j=1;j<MAX;j++){cout<<"check point"<<i<<" "<<j<<endl;
			if(Pfactor[j]==i){if(j==0){table[i][j]=0;continue;
				table[i][j]=table[i][j-1]+1; 
			}
			}
			else table[i][j]=table[i][j-1];
		}
	}*/
/*	Print2d();*/
/*	int t=0;
	int a=0,b=0,n=0;
	cin>>t;
	vector<int>v;

  for(int i=0;i<t;i++){
  	cin>>a>>b>>n;
  int val=table[i][b+1]-table[i][a+1];
  val=abs(val);
  v.push_back(val);

  }
for(int i=0;i<v.size();i++){
	cout<<v[i]<<endl;
}*/
}