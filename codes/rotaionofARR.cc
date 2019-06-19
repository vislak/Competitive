#include<iostream>
using namespace std ;


void RotateArr(int arr[], int n , int j) {
	for (int i = 0; i < j; i++) {
		RotateLeft(arr,n);
	}

}
void RotateLeft(int arr[], int n) {
	int temp = arr[0];
	for (int i = 0; i < n - 1; i++) {
		arr[i] = arr[i + 1];
	}
	arr[n - 1] = temp;

}
int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int p ;
	cin >> p;
	cout << endl << "after n rotations ";

	RotateArr(arr, n , p);
	for (int i = 0; i < n; i++) {
		cout << " " << arr[i];
	}

}