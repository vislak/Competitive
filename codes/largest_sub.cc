#include<iostream>
using namespace std ;

int lsi(int*arr, int n, int* dyn) {

	for (int i = 0; i < n; i++) 
	{dyn[i] = 1;

		for (int j = i - 1; j >= 0; j--) {

			
			if (arr[i] < arr[j]) {
				continue;
			}
			int tmp = dyn[j];
			if (dyn[i] <= dyn[j]) {
				dyn[i] = tmp + 1;
			}
		}

	}

	int max = 0;
	for (int i = 0; i < n; ++i)
	{
		if (dyn[i] > max)max = dyn[i];
	} 


	return max;
}

int main() {
	int n = 0;
	cin >> n;
	int *arr = new int[n];
	int *dyn = new int [n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		dyn[i] = 0;

	}

	dyn[0] = 1;
	int a = lsi(arr, n, dyn);
	cout << a;
	/*for (int i = 0; i <n; ++i)
	{cout<<endl<<dyn[i]<<" ";
		/* code */
	

}