#include<iostream>
using namespace std;
int combination(int *arr, int n, int *dyn) {
	if (n == 1) return 1;
	if (n == 0) return 1;
	if (dyn[n] > 0)return dyn[n];
	int output = combination(arr, n - 1, dyn);
	if (arr[n - 2] * 10 + arr[n - 1] <= 26) {
		output += combination(arr, n - 2, dyn);
	}
	dyn[n] = output;
	return output;
}
int main() {
	string s;
	int count = 0;
	int n;
	int output[100];

	while (s != "0") {


		cin >> s;
		n = s.size();
		int *arr = new int[n];
		int *dyn = new int[n + 1];

		for (int i = 0; i < n; i++) {
			arr[i] = s[i] - '0';
			dyn[i] = 0;
			dyn[i + 1] = 0;
		}
		output[count] = combination(arr, n, dyn);

		count++;
		delete[]arr;
		delete[]dyn;

	}

	for (int i = 0; i < count - 1; i++) {cout << output[i]; cout << endl;}
}