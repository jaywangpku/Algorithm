#include <bits/stdc++.h>
using namespace std;

long long shugen(long long a)
{
	long long ans = 0;
	if(a < 10){
		ans = a;
	}
	else{
		while(a>0){
			ans += a%10;
			a = a/10;
		}
		ans = shugen(ans);
	}
	return ans;
}

int main()
{
	char s[100001];
	cin >> s;
	long long n = 0;
	for(int i = 0; i < strlen(s); i++){
		n = n + s[i]-'0';
	}
	cout << shugen(n) << endl;
	return 0;
}
