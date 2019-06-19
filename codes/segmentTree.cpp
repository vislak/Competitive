#include<iostream>
using namespace std;
void BuildTree(int*arr, int si, int en, int*Tree, int tindex) {
	if (si == en){
		Tree[tindex]=arr[si];
		return;

	}
	
	int mid = (si + en) / 2;
	BuildTree(arr, si, mid, Tree, 2 * tindex);
	BuildTree(arr, mid + 1, en, Tree, 2 * tindex + 1);
	Tree[tindex] = Tree[2*tindex] + Tree[2 * tindex + 1];

}
void Modify(int*arr, int si, int ei, int*tree, int ti, int pos_to, int value) {
	int mid = (si + ei) / 2;
	if (mid == pos_to) {
		tree[ti] = value;
		return;
	}
	if (pos_to < mid)Modify(arr, si, mid, tree, 2 * ti, pos_to, value);
	if (pos_to > mid)Modify(arr, mid + 1, ei, tree, 2 * ti + 1, pos_to, value);
	tree[ti] = tree[2 * ti] + tree[2 * ti + 1];


}
int main() {
	int n;
	cin >> n;
	int*arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i]; /* code */
	}
	int *Tree = new int[2 * n];
	for (int i = 0; i <=2*n; ++i)
	{
		Tree[i]=0;/* code */
	}

	BuildTree(arr, 0, n-1, Tree, 1);

	for(int i=1;i<=2*n;i++){
		cout<<Tree[i]<<" ";
	}
	Modify(arr,0,n-1,Tree,1,2,50);

cout<<endl;
for(int i=1;i<2*n;i++){
		cout<<Tree[i]<<" ";
	}


}