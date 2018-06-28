#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin ,s);
	int len = 0, minlen = 1000, min = 0;
	for(int i = 0; i < s.length(); i++){
		int t = i;
		while(s[i]!=' '&&s[i]!='.'){
			len++;
			i++;
		}
		if(len < minlen){
			minlen = len;
			min = t;
		}
		len = 0;
	}
	for(int i = min; i < minlen+min; i++){
		cout << s[i];
	}
	return 0;
} 
