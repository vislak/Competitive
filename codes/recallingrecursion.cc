#include<iostream>
using namespace std ;


int SumArray(int arr[],int n){
	if(n==0)return arr[0];
		int smallsum=SumArray(arr+1,n-1);
		return arr[0]+smallsum;

}

void PrintIncresing(int n, int x) {
	if (x == n)return;
	cout << x << endl;
	x++;
	PrintIncresing(n, x);
	return;
}

void PrintArray(int arr[], int n)
{
	if(n==0){cout<<" "<<arr[0] ;return ;}
   PrintArray(arr,n-1);
   cout<<" "<< arr[n];
}


int Powerfunction(int a, int x) {
	if (x == 0 )return 1;
	return a * Powerfunction(a, x - 1);
}

int PrintFibonaci(int x ) {
	if (x == 1)return 1;
	if (x == 2)return 2;
	return PrintFibonaci(x - 1) + PrintFibonaci(x - 2);
}

int main() {
	int s = 10;
	PrintIncresing(s, 0);
	cout << endl << "power fn";
	int p = Powerfunction(4, 2);
	cout << "4 raise to power 2 " << p << endl;

	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 8,11};cout<<endl;
	PrintArray(arr,9);cout<<endl;
	cout<<"sum"<<SumArray(arr,4);




}