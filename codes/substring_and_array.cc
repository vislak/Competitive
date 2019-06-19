#include<iostream>
using namespace std ;
#include<string>
#include<vector>

int Subarray(int arr[], int be, int n, vector<int>a[]) {
	if (be == n) {
		a[be].push_back(-1);
		return 1;

	}
	int small = Subarray(arr, be + 1, n, a);
	int st=arr[be];
	for (int i = 0; i < small ; i++) {
		a[small+i].push_back(st);
T
		for (int j = 0 ; j < a[i].size(); j++) {
			a[small + i].push_back(a[i][j]);
		}
	}
	return 2 * small;

}

int Substring(string input, string output[]) {
	if (input.empty()) {
		output[0] = " ";
		return 1;
	}
	string small = input.substr(1);
	int smallsize = Substring(small, output);
	char a = input[0];
	for (int i = 0; i < smallsize; i++) {
		output[smallsize + i] = a + output[i];
	}
	return 2 * smallsize;


}

int main() {
	/*string output[100];
	string s;

	cin >> s;
	int size = Substring(s, output);
	for (int i = 0; i < size; i++) {
		cout << output[i] << endl
		     ;
	}*/

	cout << "subarray" << endl;
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++) {cin >> arr[i];}

	vector<int>  v[50];
	int p = Subarray(arr, 0, n, v);
	for (int i = 0; i < p; i++) {
		for (int j = 0; j < v[i].size(); j++) {
			if(v[i][j]!=-1){
			cout << v[i][j];}
		}
		cout << endl;
	}




}