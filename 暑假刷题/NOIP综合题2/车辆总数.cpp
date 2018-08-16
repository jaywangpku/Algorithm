#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	int ans = 0;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		if(temp%m==0){
			ans += temp/m;
		}
		else{
			ans += temp/m+1;
		}
	}
	cout << ans;
	return 0;
} 
