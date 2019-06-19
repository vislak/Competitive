#include<iostream>
using namespace std ;
#include<queue>

int main() {
	int n = 6;
	int arr[n - 1];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];

	}
	cout << "array input complete";
 

	int size;
	cin >> size;
	priority_queue<int,vector<int>,greater<int> > h;
	int i = 0;
	int cnt = 0;
	while (i < n) {
		if (cnt < size) {
			h.push(arr[i]);
			cnt++; i++; continue;
			
		}
		if (h.top() < arr[i]) {
			h.pop();
			h.push(arr[i]);
			i++;
			continue;

		}
		i++;
	}
	cout << "max "<<cnt<<" element" << endl;
	while (!h.empty()) {
		cout << h.top() << " ";
		h.pop();
	}

}