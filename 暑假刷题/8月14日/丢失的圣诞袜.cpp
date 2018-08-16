#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, ans = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		ans ^= temp;
	}
	cout << ans << endl;
	return 0;
} 
