#include<iostream>
#include<math.h>
using namespace std;

int PrintPrimeArray(int*arr, int n) {
	cout << "primes in n range :";
	for (int i = 0; i < n; i++) {

		if (arr[i]) {
			cout << i << " ";
		}
	}
	cout << endl;
}


void setPrimes(int* arr, int n) {
	for (int i = 3; i <= n; i++) {arr[i] = 1;}

	arr[0] = 0;
	arr[1] = 0;
	arr[2] = 1;

	for (int i = 2; i * i <= n; i++) {
		if (arr[i]) {
			for (int j = i * i; j <= n; j = j + i) {
				arr[j] = 0;

			}
		}
	}
	/*PrintPrimeArray(arr,n);*/

}


int main() {
	int x;
	cin >> x;
	for (int z = 0; z < x; z++) {
		int n;
		cin >> n;

		int m = 1000000007;

		int*arr = new int[n + 1];
		int ans = 1;

		setPrimes(arr, n);

		for (int i = 2; i <= n; i++) {
			if (arr[i]) {
				int p = 1;
				int a = 0;


				while (1) {
					int part = n / (pow(i, p));

					if (part == 0)break;

					a = a + part;

					p++;
				}


				a++;

				ans = ( long(ans) % m * (a % m)) % m;



			}
		}
		cout << ans;
	}



}