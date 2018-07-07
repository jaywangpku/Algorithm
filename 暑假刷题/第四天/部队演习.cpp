#include <bits/stdc++.h>
using namespace std;

int main()
{
	double n, time;
	bool flag = true;
	int ans = 0;
	cin >> n;
	while(n>0.5){
		if(flag){
			time = n/(10+60);
		}
		else{
			time = n/(8+60);
		}
		ans++;
		flag = !flag;
		n = n - time*(10+8);
	}
	cout << ans << endl;
	return 0;
} 
