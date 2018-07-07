#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int a, b;
	int ans = 0;
	cin >> n >> a >> b;
	for(int i = 1; i <= n; i++){
		if((i-1)%a+1 == (i-1)%b+1){
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
