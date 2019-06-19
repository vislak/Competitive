#include<iostream>
using namespace std;
#include<vector>
#include<math.h>

void Primes(int n,vector<int>&v){
	int *Primearray=new int[n+1];
	
	Primearray[0]=0;
	Primearray[1]=0;
	Primearray[2]=1;
	for(int i=2;i*i<=n;i++){
		if(Primearray[i]){
         

			for(int j=i*i;j<=n;j=j+i){
				Primearray[j]=0;
			}
		}

	}
	for(int i=2;i<=n;i++){
		if(Primearray[i])v.push_back(i);

	}
	delete[] Primearray;
}


void Primefactors(vector<pair<int,int> > &v,int k){
	vector prime<int> p;
   Primes(k,p);
  int size=p.size();
  while(k&&size){
  	for(int i=0;i<)
  }
	



}
int main(){
	int n ;
	cin>>n;
	int*arr=new int[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	int k;cin>>k;
  vector<pair<int,int> > v;
   Primefactors(v,k);


}