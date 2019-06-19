
#include<iostream>
using namespace std;

void PrintArray(int*arr,int n, int be = 0) {
	
	int temp =be;
	be=n;
	n=temp;
	for (int i = be; i < n; i++) {
		cout << arr[i] << " ";
	} cout << endl;
}
void InputArray(int*arr, int n) {
	for (int i = 0; i < n; i++)cin >> arr[i];

}
void Primes(int n, vector<int> &v) {
	int *Primearray = new int[n + 1];

	Primearray[0] = 0;
	Primearray[1] = 0;
	Primearray[2] = 1;
	for (int i = 2; i * i <= n; i++) {
		if (Primearray[i]) {


			for (int j = i * i; j <= n; j = j + i) {
				Primearray[j] = 0;
			}
		}

	}
	for (int i = 2; i <= n; i++) {
		if (Primearray[i])v.push_back(i);

	}
	delete[] Primearray;
}
