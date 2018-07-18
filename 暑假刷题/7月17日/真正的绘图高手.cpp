#include <bits/stdc++.h>
using namespace std;

int main()
{
	char a, aa;
	int len;
	cin >> a;
	if(a>='A'&&a<='Z'){
		len = a - 'A';
		aa = 'A';
	}
	if(a>='a'&&a<='z'){
		len = a - 'a';
		aa = 'a';
	}
	for(int i = 0; i <= len; i++){
		for(int j = 0; j < len-i; j++){
			cout << " ";
		}
		for(int j = 0; j <= i; j++){
			cout << char(aa+j);
		}
		for(int j = i-1; j >= 0; j--){
			cout << char(aa+j);
		}
		for(int j = 0; j < len-i; j++){
			cout << " ";
		}
		cout << endl;
	}
	for(int i = len-1; i >= 0; i--){
		for(int j = 0; j < len-i; j++){
			cout << " ";
		}
		for(int j = 0; j <= i; j++){
			cout << char(aa+j);
		}
		for(int j = i-1; j >= 0; j--){
			cout << char(aa+j);
		}
		for(int j = 0; j < len-i; j++){
			cout << " ";
		}
		cout << endl;
	}
	return 0;
} 
