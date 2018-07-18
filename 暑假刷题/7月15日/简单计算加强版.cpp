#include <bits/stdc++.h>
using namespace std;

int main()
{
	double a, b, ans;
	cin >> a >> b;
	char c;
	cin >> c;
	if(c=='+'){
		ans = a + b;
	}
	if(c=='-'){
		ans = a - b;
	}
	if(c=='*'){
		ans = a*b;
	}
	if(c=='/'){
		ans = a/b;
	}
	cout << ans << endl;
	return 0;
} 
