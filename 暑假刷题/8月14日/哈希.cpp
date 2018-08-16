#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	int a[100] = {0}; 
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int temp;
		cin >> temp;
		temp = temp % n;
		if(a[temp] == 0){
			a[temp] = 1;
		}
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		if(a[i]){
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
} 
