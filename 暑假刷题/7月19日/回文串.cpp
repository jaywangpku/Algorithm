#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	bool flag = true;
	cin >> s;
	int mid = s.length()/2;
	if(s[mid]=='*'&&s.length()%2==1){
		s[mid] = 'a';
	}
	for(int i = 0; i < mid; i++){
		if(s[i]==s[s.length()-1-i]){
			if(s[i]=='*'){
				s[i] = 'a';
				s[s.length()-1-i] = 'a';
			}
		}
		else if(s[i]=='*'&&s[s.length()-1-i]!='*'){
			s[i] = s[s.length()-1-i];
		}
		else if(s[i]!='*'&&s[s.length()-1-i]=='*'){
			s[s.length()-1-i] = s[i];
		}
		else{
			flag = false;
			break;
		}
	}
	if(flag)
		cout << s;
	else{
		cout << -1;
	} 
	return 0;
} 
