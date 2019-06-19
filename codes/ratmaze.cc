#include<iostream>
using namespace std ;
int count = 0;

void Print(int arr[][20], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << " " << arr[i][j];
		} cout << endl;

	}
}

bool Isdown(int arr[][20], int n , int i , int j) {
	if (i <= n && j <= n && i + 1 < n && j + 1 << n && arr[i + 1][j] == 0) {
		return true;

	} return false;
}

bool Isup(int arr[][20], int n , int i , int j) {
	if (i <= n && j <= n && i - 1 > 0 && arr[i - 1][j] == 0) {
		return true;

	} return false;
}

bool Isright(int arr[][20], int n , int i , int j) {
	if (i <= n && j <= n && j + 1 < n && arr[i][j + 1] == 0) {
		return true;
	} return false;
}

bool Isleft(int arr[][20], int n , int i , int j) {
	if (i <= n && j <= n && j - 1 > 0 && arr[i][j - 1] == 0) {
		return true;

	} return false;
}


bool Find(int arr[][20], int n, int i, int j) {
	if (i == n && j == n) {
		count ++;
		Print(arr, n);
		return true;

	}

	while (i < n && j < n) {

		arr[i][j] = 2;
		if (Isd
			own(arr, n, i, j)) {
			cout << "down" << endl;
			Find(arr, n, i + 1, j);
		}
		if (Isright(arr, n, i, j)) {
			cout << "right";
			Find (arr, n, i, j + 1);
			/*
					} if (Isleft(arr, n, i, j)) {
						Find(arr, n, i, j - 1);
					}
					if (Isup(arr, n, i, j)) {
						Find(arr, n, i - 1, j);
					}*/
			arr[i][j] = 0;

		}
	}}

	int main() {
		int arr[5][20];
		int n; cin >> n;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> arr[i][j];
			}
		}

		bool a = Find(arr, n, 0, 0);
		cout << count << endl;

	}