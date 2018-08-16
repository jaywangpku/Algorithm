#include <bits/stdc++.h>
using namespace std;

int main()
{
	int d[1005] = {0};	//等待用的时间 
	int x[1005] = {0};  //打水用的时间 
	int n, r;
	cin >> n >> r;
	int ans = 0;
	for(int i = 0; i < n; i++){
		cin >> x[i];
	}
	sort(x, x+n);
	for(int i = 0; i < n; i++){
		sort(d, d+r);
		ans += d[0] + x[i];
		d[0] += x[i];
	} 
	cout << ans << endl;
	return 0;
} 
