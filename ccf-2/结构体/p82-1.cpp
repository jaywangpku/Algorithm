#include <iostream>
using namespace std;

struct runMan{
	string name;
	int time;
};

int main()
{
	int N, K;
	runMan rm[101];
	cin >> N >> K;
	for(int i = 1; i <= N; i++){
		cin >> rm[i].name >> rm[i].time;
	}
	for(int i = N; i > 1; i--){
		for(int j = 1; j < i; j++){
			if(rm[j].time > rm[j+1].time){
				swap(rm[j], rm[j+1]);
			}
		}
	}
	cout << rm[K].name << endl;
	return 0;
} 
