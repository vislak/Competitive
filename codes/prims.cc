#include<iostream>
using namespace std;

int MaNV(bool visited[], int distance[], int n) {
	int min = 1000;
	int index;
	for (int i = 0; i < n; i++) {
		if (!visited[i] && distance[i] <= min) {
			index = i;
			min = distance[i];


		}
	}
	return index;
}



void Prim(int **arr, int n , bool visited[], int parent[], int distance[], int sv, int cnt = 1) {
	for (int i = 0; i < n; i++) {
		int m = sv;
		visited[sv] = 1;
		for (int i = 0; i < n; i++) {
			if (arr[m][i] != 0 && arr[m][i] <= distance[i]) {
				parent[i] = m;
				distance[i] = arr[m][i];
			}
		}
		sv = MaNV(visited, distance, n);

	}
}


void Prims(int**arr, int n , int sv) {
	bool visited[n];
	int parent[n];
	int distance[n];
	int cnt = 1;
	for (int i = 0; i < n; i++) {
		visited[i] = false;
		parent[i] = i;
		distance[i] = 10000;

	}
	distance[sv] = 0;
	Prim(arr, n, visited, parent, distance, sv, cnt);
	for (int i = 0; i < n; i++) {
		if (parent[i] >= i) {
			cout << parent[i] << " " << i << " " << arr[parent[i]][i];
		} else {cout << i << " " << parent[i] << " " << arr[parent[i]][i];}
	}
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
		cout << "endter edges eg(1--2) & weight" << endl;
		int a, b, c;
		cin >> a >> b >> c;
		arr[a][b] = c;
		arr[b][a] = c;

	}
	cout << "enter starting sourc";
	int sv ;
	cin >> sv;
	Prims(arr, n, sv );


}

