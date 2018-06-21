#include <bits/stdc++.h>
using namespace std;

double zws(int a[], int len)
{
	double ans;
	for(int i = len-1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(a[j] > a[j+1]){
				swap(a[j], a[j+1]);
			}
		}
	}
	if(len%2==0){
		ans = (a[len/2-1] + (a[len/2]))/2.0;
	}
	else{
		ans = a[len/2];
	}
	return ans;
} 

int main()
{
	int N, a[1001] = {0};
	double ans;
	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> a[i];
	}
	ans = zws(a, N);
	printf("%.3f\n", ans);
	return 0; 
} 
