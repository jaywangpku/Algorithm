#include <bits/stdc++.h>
using namespace std;

long long fun(long long k)
{
	if(k<=1){
		return 1;
	}
	return fun(k-1) + fun(k-2);
}

int main()
{
	freopen("louti.in", "r", stdin);
	freopen("louti.out", "w", stdout);
	int k;
	while(cin >> k){
		cout << fun(k) << endl;
	}
	return 0;
}
