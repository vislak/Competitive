#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int Euclid(int a, int b) {
	if (b == 0)return a;
	return Euclid(b, a % b);

}


void StringToInt(string s, int size, vector<int>&v) {
	cout<<endl<<"string size "<<size<<endl;
	int i = 0;
	while (s[i] != '\0') {
		int n = int(s[i] - '0');
		v.push_back(n);
		i++;

	}
}


int Modulus(int a, vector<int>&v, int size) {
	int pos = 0;
	int i = 0;
	int n = 0;

	while (pos < size) {
		n = v[pos] + pow(10, i) * n;



		if (n >= a) {
			n = n % a;
			i = 1;
			pos++;
			if (n == 0)i = 0;
			continue;
		}
		i++;
		pos++;
	}
	return n;


}
int main() {
	int a;
	string s;
	cin >> a;
	cin >> s;

	vector<int> v;

	StringToInt(s, s.size(), v);

	vector<int>::iterator itr;
	cout << "input string" << endl;
	for (itr = v.begin(); itr < v.end(); itr++) {
		cout << *itr;
	}cout<<endl;
	int reduced = Modulus(a, v, v.size() );
	cout << "reduced moudulu " << reduced;
	cout<<endl;


	int hcf=Euclid(a,reduced);
	cout<<hcf;




}