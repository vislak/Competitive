#include<iostream>
using namespace std ;
#include<queue>

void Dfs(int **arr, bool visited[], int n, int sv) {
	cout << sv << " ";
	visited[sv] = true;
	for (int i = 0; i < n; i++) {
		if (sv == i) {
			continue;
		}
		if (arr[sv][i] == 1 && visited[i] == 0) {
			Dfs(arr, visited, n, i);
		}
	}
}



void HelperBfs(int**arr, int n, bool visited[], int sv,int  ev,queue<int>& q) {
	if (visited[ev] || q.empty()) {
		return;
	}
	visited[sv]=1;
	q.pop();

	for (int i = 0; i < n; i++) {
		if (arr[sv][i] == 1 && !visited[i]) {
			q.push(i);

		}
	}
	HelperBfs(arr,n,visited,q.front(),ev,q);

}

bool Haspath(int**arr, int n, int sv, int ev) {
	bool visited[n];
	for (int i = 0; i < n; i++) {
		visited[i] = false;
	}
	queue<int> q;
	q.push(sv);
	HelperBfs(arr, n, visited, sv, ev, q);

	if (visited[sv] && visited[ev])return true;
	return false;

}





/*Recursive implementation of Bfs on adjancy matrix*/
void Bfs(int **arr, int n, bool visited[], int sv, queue<int> &q) {
	if (q.empty()) {
		return;
	}


	visited[sv] = true;
	cout << q.front() << " ";
	q.pop();
	for (int i = 0; i < n; i++) {
		if (i == sv) {continue;}
		if (arr[sv][i] == 1 && visited[i] == 0) {
			q.push(i);
			visited[i] = 1;
		}
	}
	Bfs(arr, n, visited, q.front(), q);


}

int main() {
	int n, e;
	cout << "no of vertex and edges" << endl;

	cin >> n >> e;
	bool visited[n];

	int **arr = new int *[n];
	for (int i = 0; i < n; i++) {

		arr[i] = new int [n];

	}



	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n ; j++) {
			arr[i][j] = 0;
		}
	}

	for (int i = 0; i < e; i++) {
		cout << "endter edges eg(1--2)" << endl;
		int a, b;
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;

	}

	cout << "enter starting sourc && end vertex to find path";
	int sv ;
	cin >> sv;
	int ev;
	cin>>ev;

	/*queue<int> q;
	q.push(s);


	Bfs(arr, n, visited, s, q);*/

	/*cout << "our matrix" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout <<	arr[i][j] << " ";
		} cout << endl;
	}*/
	/*cout << "path is " << endl;
	Dfs(arr, visited, n, s);*/


if(Haspath(arr,n,sv,ev)){
	cout<<"path found"<<endl;
}else cout<<"sorry";
}