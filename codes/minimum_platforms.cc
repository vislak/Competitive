#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

class Train {
public:
	int ar;
	int dep;
};

bool check(Train a,Train b){
	if(b.ar>a.ar)return true;
	return false;
	
}
int main() {
	int n;
	cin>>n;
	Train* arr = new Train[n];
	int arri;
	int dept;
	cout << "enter arrival and dperature time for n train" << endl;
	for (int i = 0; i < n; i++) {
		cin >> arri;
		cin >> dept;
		arr[i].ar = arri;
		arr[i].dep = dept;
	}
	sort(arr,arr+n,check);

	vector< vector<Train> > platform;
	int cnt = 0;

	for (int i = 0; i < n; ++i)
	{
		bool flag = false;
		if (platform.empty()) {
			                                            cout<<"check 1............";
			platform[0].push_back(arr[0]); cnt++;
			continue;
		}
		vector< vector<Train> > ::iterator itr	;
		vector<int> itr2;
		for (itr = platform.begin(); itr != platform.end(); itr++) {
			Train latest = *itr->end();
			if (latest.dep < arr[i].ar) {             cout<<"chech 2............."<<latest.dep;
				flag = true;
				break;
			}


		}
		if (flag == false) {
			cnt++;

		}

	}
	cout<<"ok";
	cout<<cnt;
}
