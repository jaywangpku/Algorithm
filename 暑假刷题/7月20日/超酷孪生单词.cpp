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
	bool flag1 = true, flag2 = true;
	for(int i = 0; i < 26; i++){   // ÅÐ¶ÏÂÏÉúµ¥´Ê
		if(a[i]%2!=0){
			flag1 = false;
		}
	}
	int b[10010] = {0};
	for(int i = 0; i < 26; i++){  // ÅÐ¶Ï³¬¿áµ¥´Ê 
		if(a[i]==0){
			continue;
		}
		if(b[a[i]]==0){
			b[a[i]] = 1;
		}
		else{
			flag2 = false;
		}
	}
	if(flag1&&flag2){
		cout << "Cool twin word!";
	}
	else if(flag1&&(!flag2)){
		cout << "Twin word!";
	}
	else if((!flag1)&flag2){
		cout << "Cool word!";
	}
	else{
		cout << "Just a ordinary word!";
	}
	return 0;
} 
