#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int a[1005];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	cout << a[k-1] << endl;
	return 0;
} 
