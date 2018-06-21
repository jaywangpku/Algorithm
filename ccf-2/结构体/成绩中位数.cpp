#include <bits/stdc++.h>
using namespace std;

struct tStudent{
	string name;
	int total;
};

tStudent A[1100];
int N;
double zws;

int main()
{
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> A[i].name >> A[i].total; 
	}
	for(int i = N-1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(A[j].total < A[j+1].total){
				swap(A[j], A[j+1]);
			}
		}
	}
	if(N%2==0){
		zws = (A[N/2-1].total + A[N/2].total)/2.0;
	}
	else{
		zws = A[N/2].total;
	}
	for(int i = 0; i < N; i++){
		if(abs(A[i].total - zws)<=5){
			cout << A[i].name << " " << A[i].total << endl;
		}
	}
	return 0;
} 
