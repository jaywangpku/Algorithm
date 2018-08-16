#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;

int A[MAXN], N;

void qsort(int l, int r){
	if(l >= r) return;
	int i = l, j = r, t = A[rand()%(r-l+1)+l];
	while(i <= j){
		while(A[i]<t) i++;
		while(A[j]>t) j--;
		if(i <= j){
			swap(A[i], A[j]);
			i++;
			j--;
		}
	}
	qsort(l,j);
	qsort(i,r);
} 

int main()
{
	cin >> N;
	for(int i = 1; i <= N; i++){
		cin >> A[i];
	}
	srand(int(time(0)));
	qsort(1, N);
	for(int i = 1; i <= N; i++){
		cout << A[i] << " ";
	}
	return 0;
}
