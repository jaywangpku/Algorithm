#include <bits/stdc++.h>
using namespace std;
struct runner{
	string name;
	int time; 
	friend bool operator <(runner a, runner b){
		return a.time < b.time;
	}
};

int main()
{
	int n, k;
	cin >> n >> k;
	runner runners[105];
	for(int i = 0; i < n; i++){
		cin >> runners[i].name >> runners[i].time;
	}
//	for(int i = n-1; i > 0; i--){
//		for(int j = 0; j < i; j++){
//			if(runners[j].time > runners[j+1].time){
//				swap(runners[j], runners[j+1]);
//			}
//		}
//	}
	sort(runners, runners+n);
	cout << runners[k-1].name << endl;
	return 0;
} 
