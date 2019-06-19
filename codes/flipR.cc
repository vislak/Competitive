#include<iostram>
using namespace std;
int MaxSub(arr, n) {
	int curmax = 0;
	int max = 0, cnt = 0;
	int bi = 0, bj = 0, ei = 0, ej = 0;
	
	for (int i = 0; i < n; ++i)

		curmax = curmax + ar[i];
	if (curmax < 0) {curmax = 0; continue;
      
	}


	if (curmax > 0) {
		if(cnt==0)bi=i;cnt++;
		

      }


	if (curmax > max) {max = curmax; continue;}

} return max;

}
int main() {
	string s;
	cin >> s;
	int n = s.size();
	int arr[n];
	for (int i = 0; i < n; i++) {
		if (s[i] == 'r' || s[i] == 'R')arr[i] == -1;
		else arr[i] == 1;
	}

}