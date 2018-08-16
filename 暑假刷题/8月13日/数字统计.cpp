#include <bits/stdc++.h>
using namespace std;

int R(int x)
{
	int a[5] = {0}, i = 0, y = 0;
	while(x){
		a[i++] = x%10;
		x = x /10;
	}
	for(int j = 0; j < i; j++){
		y = y*10 + a[j];
	}
	return y;
}

int main()
{
	int n;
	int ans = 0; 
	cin >> n;
	for(int i = 1; i < n; i++){
		if(i + R(i) < n){
			ans++; 
		}
	}
	cout << ans;
	return 0;
} 
