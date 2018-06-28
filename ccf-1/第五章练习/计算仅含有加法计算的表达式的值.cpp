#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin , s);
	int ans = 0;
	for(int i = 0; i < s.length(); i++){
		int a = 0;
		while(s[i]!='+' && i < s.length()){
			int b = s[i] - '0';
			a = a*10 + b;
			i++;
		}
		ans += a;
	}
	cout << ans << endl;
} 
