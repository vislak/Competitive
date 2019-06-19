#include<iostream>
using namespace std ;

pair<int, int> Partybalancer(int*pcost, int*fun, int np, int pbal) {
	if (np == 0 || pbal == 0)return (0,0;
	if (pcost[n - 1] > pbal)return Partybalancer(pcost, fun, np - 1, pbal);
	pair<int, int> pbal;
	a = fun[n - 1] + Partybalancer(pcost, fun, np - 1, pbal - pcost[n - 1]);
	b = Partybalancer(pcost, fun, np - 1, pbal);
	if(a>b)pbal.second=


}



int main() {
	int np = 1, pbal = 1;
	cin >> pbal >> np;
	int *pcost = new int[np];
	int *fun = new int[np];

	while (pbal != 0 && np != 0) {
		for (int i = 0; i < np; i++) {
			cin >> pcost[i] >> fun[i];

		}
		pair<int, int>P = Partybalancer(pcost, fun, np, pbal);
		cout << P.first << " " << P.second;
		cin >> pbal >> np;


	}
}