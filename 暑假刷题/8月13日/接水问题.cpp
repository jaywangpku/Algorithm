#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s, t;
	cin >> s >> t;
	for(int i = 0; i < s.length(); i++){
		bool flag = true;
		for(int j = 0; j < t.length(); j++){
			if(s[i+j]!='*'&&s[i+j]!=t[j]){
				flag = false;
			}
		}
		if(flag){
			cout << i+1 << " ";
		}
	}
	return 0;
} 
