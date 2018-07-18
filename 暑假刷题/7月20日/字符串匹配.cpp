#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s, sub;
	cin >> sub >> s;
	int pos = 0;
	int key = 1;
	while(key!=-1){
		key = s.find(sub, pos);
		if(key!=-1){
			cout << key+1 << endl;
			pos = key + 1;
		}
	}
	return 0;
} 
