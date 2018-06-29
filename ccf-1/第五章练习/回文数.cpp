#include <bits/stdc++.h>
using namespace std;
bool check(int a[], int len){
	bool t = true;
	for(int i = 0; i < len/2; i++){
		if(a[i]!=a[len-1-i]){
			t = false;
		}
	}
	return t;
}
int main()
{
	int n;
	string s;
	cin >> n >> s;
	int a[1001] = {0}, b[1001] = {0}, c[1001] = {0};
	int len = s.length();
	for(int i = 0; i < s.length(); i++){
		if(s[i]>='A'){
			a[len-1-i] = s[i] - 'A' + 10;
		}
		else{
			a[len-1-i] = s[i] - '0';
		}
	}
	int step = 1;
	while(step <= 30){
		for(int i = len-1; i >= 0; i--){
			b[i] = a[len-1-i];
		}
		// 进制转换 
		int jw = 0;
		for(int i = 0; i < len; i++){
			c[i] = (a[i] + b[i] + jw)%n;
			jw = (a[i] + b[i] + jw)/n;
		}
		if(jw){
			c[len] = 1;
			len = len+1;
		}
		jw = 0;
		// 检查是否是回文串
		if(check(c, len)){
			break;
		}
		else{
			memset(a, 0, sizeof(a));
			memset(b, 0, sizeof(b));
			for(int i = 0; i < len; i++){
				a[i] = c[i];
			}	
			memset(c, 0, sizeof(c));
		}
		step++;
	}
	if(step==31){
		cout << "impossible";
	}
	else{
		cout << step;
	}
	return 0;
} 
