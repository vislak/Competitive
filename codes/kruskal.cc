#include<iostream>
#include<algorithm>
using namespace std ;
class Edge {
public:

	int source;
	int dest;
	int weigth;
};

int Parent(int i,int parent[]){
	if(parent[i]==i)return i;
	return Parent(parent[i],parent);
}

bool helper(Edge  e1, Edge e2) {
	return e1.weigth < e2.weigth;
}

int main() {
	int n;
	int e;

	cout << "no of vertex& edges";
	cin >> n >> e;


	Edge* edge = new Edge[e];


	for (int i = 0; i < e; i++) {
		cout << "enter edge(source--dest) & weight";
		cin >> edge[i].source >> edge[i].dest >> edge[i].weigth;

	}


	std::sort(edge, edge + e, helper);
		

	int parent[n];
	for(int i=0;i<n;i++){
		parent[i]=i;

	}
	cout<<"edge_source edge_destin edge_weight  "<<endl;
	int i = 0;
	int cnt = 1;


	while (cnt < n) {

		if (Parent(edge[i].source,parent)!=Parent(edge[i].dest,parent)) {
			cout << edge[i].source << " " << edge[i].dest << " " << edge[i].weigth<<endl;
			parent[edge[i].dest]=edge[i].source;
			cnt++;

		}
		i++;
	}

}