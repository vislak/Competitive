#include<iostream>
using namespace std;

void SetMultipleNonPrime(int x, int n, bool *arr) {
	for (int i = x; x * i <= n; i++) {
		arr[x * i] = false;

	}
	cout << "SetMultipleNonPrime Working";

}

bool CheckPrime(int x) {
	cout<<"check prime entered";
	int i = 0;
	for (i = 2; i * i < x; i++) {
		if (x % i == 0)return false;
	}
	if (i * i == x)return false;
	cout << "check Prime working";
	return true;

}


void PrintPrimes(int n) {
	bool *prime = new bool[n + 1];

	prime[0] = false;
	prime[1] = false;
	prime[2] = true;

	for (int i = 3; i <= n ; i++)prime[i] = true;
		cout<<"check1";

	for (int i = 3; i * i <= n; i++) {
		cout<<"check 2";

		if (prime[i]) {

			prime[i] = CheckPrime(i);
			cout<<"check 3";
			if (prime[i]) {
				SetMultipleNonPrime(i, n, prime);
				cout<<"check 5";
			}
		}
	}

	//Printing Primes from 1 to N
	for (int i = 0; i < n + 1; i++) {
		if (prime[i]) {cout << i << " ";}
	}

	delete[] prime;


}

int main() {
	int n ;
	cin >> n;
	PrintPrimes(n);

}