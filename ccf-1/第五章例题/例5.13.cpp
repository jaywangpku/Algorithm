#include <iostream>
#include <cstring>
using namespace std;

const int MAXN = 100001;
int main()
{
	/*
	int a[MAXN];
	int n, i;
	int ans;
	int t;
	cin >> n;
	for(i = 1; i <= n; i++){
		cin >> a[i];
	}
	ans = a[1];
	t = ans;
	for(i = 2; i <= n; i++){
		if(t >= 0){
			t = t + a[i];
		}
		else{
			t = a[i];
		}
		if(t > ans){
			ans = t;
		}
	}
	cout << ans;
	return 0;
	*/
	/*
	int a[MAXN];
	int n,i,j,k;
	int maxsum;
	int temp;
	cin >> n;
	for(i = 1; i <= n; i++){
		cin >> a[i];
	}
	maxsum = a[1];
	for(i = 1; i <= n; i++){
		for(j = i; j <= n; j++){
			temp = 0;
			for(k = i; k <= j; k++){
				temp = temp + a[k];
			}
			if(maxsum < temp){
				maxsum = temp;
			}
		}
	}
	cout << maxsum;
	return 0;
	*/
	int s[MAXN], a[MAXN];
	memset(s, 0, sizeof(s));
	int n, i, j;
	int maxsum;
	int temp;
	cin >> n;
	for(i = 1; i <= n; i++){
		cin >> a[i];
		s[i] = s[i-1] + a[i];
	}
	maxsum = a[1];
	for(i = 1; i <= n; i++){
		for(j = i; j <= n; j++){
			temp = s[j] - s[i-1];
			if(maxsum < temp){
				maxsum = temp;
			}
		}
	}
	cout << maxsum;
	return 0;
} 
