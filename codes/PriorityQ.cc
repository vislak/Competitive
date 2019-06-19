#include<iostream>
using namespace std;
#include<vector>


class Heap {
	vector<int> v;

	void Heapify(int x) {
		if (x >= v.size() || x <= 0)return;

		int mi = x;
		int l = 2 * x;
		int r = 2 * x + 1;

		if (v[mi] > v[l] && l < v.size()) {
			mi = l;


		}
		if (v[mi] > v[r] && r < v.size()) {
			mi = r;
		}

		if (mi != x) {
			swap(v[mi], v[x]);
			Heapify(mi);
		}



	}
public:
	Heap() {
		
		v.push_back(-1);
	}



	void push(int x) {
		
		v.push_back(x);
		int i = v.size() - 1;
		int p = i / 2;
		while (p>0 && v[i] < v[p]) {
			

			swap(v[p], v[i]);
			i = p;
			p = p / 2;

		}

	}
	void pop() {
		swap(v[v.size() - 1], v[1]);
		v.pop_back();
		Heapify(1);


	}
	int top() {
		return v[1];

	}
	int size() {
		return v.size() - 1;

	}
};
int main() {
	cout << "hello";
	Heap h;
	h.push(5);
	cout<<h.top();

}





