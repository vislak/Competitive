#include<iostream>
#include<vector>
#include<set>


#include<algorithm>

using namespace std;


void connected_compo(vector<vector<int> > &v,int n ,int e,unordered_set<unordered_set<int> > & set){

}

int main(){
int n;
int e ;
vector<vector<int> > v;

for(int i=0;i<e;i++){
	cout<<"enter edge";
	int x,y;
	cin>>x>>y;
	v[x-1].push_back(y-1);
	v[y-1].push_back(x-1);
}
set<int> iset;
unordered_set<int> ust;

unordered_set<unordered_set*<int> >* uset;
connected_compo(v,n,e,set);
}