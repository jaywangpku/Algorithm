#include <bits/stdc++.h>
using namespace std;

int bin(string s, int b){
	int ans = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i]-'0' >= b){
			return -1;
		}
		else{
			ans = ans*b + (s[i]-'0');
		}
	}
	return ans;
}

int main()
{
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	int i = 0;
	for(i = 2; i <= 16; i++){
		int a = bin(s1, i);
		int b = bin(s2, i);
		int c = bin(s3, i);
		if(a>=0&&b>=0&&c>=0){
			if(a*b==c){
				break;
			}
		}
	}
	if(i==17){
		cout << 0 << endl;
	}
	else{
		cout << i << endl;
	}
	
	return 0;
}
