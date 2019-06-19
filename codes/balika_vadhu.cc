#include<iostream>
#include<string>
using namespace std;


#define forn(i,n,l) for(int i=l;i<n;i++)
int sum1 = 0, sum2 = 0, sum3 = 0, a = 0, b = 0;


int SumAscii(char*s1, char* s2, int l1, int l2, int k) {
	if (s1[0]=='\0'||s2[0]=='\0')return -2;
	if (k == 0)return -2;
	if (s1[0] == s2[0]) {
		return max(  (s1[0] + SumAscii(s1+1, s2 + 1, l1 - 1, l2 - 1, k - 1)), max( SumAscii(s1 + 1, s2, l1 - 1, l2, k), SumAscii(s1, s2 + 1, l1, l2 - 1, k) ) );


	}

   return max( SumAscii(s1 + 1, s2, l1 - 1, l2, k), SumAscii(s1, s2 + 1, l1, l2 - 1, k) );
}

int BalikaVadhu(string s1, string s2 , int n, int m, int k) {
	if (n == 0 || m == 0)return 0;

}

int main() {
	char s1[100],s2[100];
	cin >> s1 >> s2;
	int k;
	cin >> k;

	int l1 = strlen(s1);
	int l2 = strlen(s2);
	int dp[l1 + 1][l2 + 1][k + 1];



	int x = SumAscii(s1, s2, l1, l2, k);
	cout << x;

}