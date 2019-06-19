#include<iostream>
#include<vector>
#include<set>
using namespace std ;


int main() {
	vector<int> v;

	for (int i = 0; i < 7; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}


	set<int> s;
	for (it = v.begin(); it != v.end(); it++) {
		s.insert(*it);
	}
	set<int>::iterator itr;
	vector<int> n;
	int i = 0;
	for (itr = s.begin(); itr != s.end(); itr++) {
		n[i] = *itr;


	}
	cout << endl;
	for (int i = 0; i < n.size(); i++) {
		cout << n[i] << " ";
	}

}