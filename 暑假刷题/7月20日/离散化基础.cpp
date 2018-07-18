#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[10010] = {0}, b[10010] = {0};
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a, a+n);
	int ans = 1;
	for(int i = 0; i < n; i++){
		int j = 0;
		while(a[j]!=b[i]){
			if(j==0)
				ans++;
			else{
				if(a[j]!=a[j-1]){
					ans++;
				}
			}
			j++;
		}
		cout << ans << " ";
		ans = 1;
	}
	return 0;
} 
