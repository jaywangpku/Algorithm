#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[50010];
	for(int i = 0; i < 50010; i++){
		a[i] = 1;
	}
	for(int i = 2; i < 50010; i++){
		if(a[i]){
			for(int j = 2; i*j < 50010; j++){
				a[i*j] = 0;
			}
		}
	}
	int ans = 0;
	for(int i = 2; i <= n; i++){
		if(a[i]){
			ans += i;
		}
	}
	cout << ans << endl;
	return 0;
} 
