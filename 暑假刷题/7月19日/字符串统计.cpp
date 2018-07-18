#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int a[26] = {0};
	for(int i = 0; i < s.length(); i++){
		a[s[i]-'a']++;
	}
	int ans = 0;
	for(int i = 0; i < 26; i++){
		if(ans < a[i]){
			ans = a[i];
		}
	}
	cout << ans;
	return 0;
} 
