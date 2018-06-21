#include <bits/stdc++.h>
using namespace std;

struct tStudent{
	string name;
	int cha, math;
	int total;
};

tStudent A[1100];
int N;

int main()
{
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> A[i].name >> A[i].cha >> A[i].math;
		A[i].total = A[i].cha + A[i].math; 
	}
	for(int i = N-1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(A[j].total < A[j+1].total){
				swap(A[j], A[j+1]);
			}
		}
	}
	for(int i = 0; i < N; i++){
		cout << A[i].name << " " << A[i].cha << " " 
		<< A[i].math << " " << A[i].total << endl;
	}
	return 0;
} 
