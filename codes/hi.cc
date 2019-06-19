#include<iostream>
using namespace std ;
int output[5];

void printsubseq(int arr[], int n, int i, int j)
{
	if (i == n )
	{
		for (int k = 0; k < 6; ++k)
		{
			if(output[k]==0)
			{
				cout<<"";
			}
			else cout << output[k] << " ";
		}
		cout << endl;
		return;
	}
	int a = arr[i];
	printsubseq(arr, n, i + 1, j);
	output[j] = a ;
	printsubseq(arr, n, i + 1, j + 1);
}
int main() {
	int n;
	cin >> n;
	int arr[n + 1];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	printsubseq(arr, n, 0, 0);
}