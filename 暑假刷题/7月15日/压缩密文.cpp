#include <bits/stdc++.h>
using namespace std;

string itos(int k)
{
	string s;
	while(k){
		s += (k%10)+'0';
		k = k/10;
	}
	for(int i = 0; i < s.length()/2; i++){
		char temp = s[i];
		s[i] = s[s.length()-1-i];
		s[s.length()-1-i] = temp;
	}
	return s;
}

int main()
{
	string s, stemp;
	cin >> s;
	for(int i = 0; i < s.length(); i++){
		if(s[i]>='A'&&s[i]<='Z'){
			s[i] = s[i] + 'a' - 'A';
		}
	}
	int j = 0, k = 0;
	for(int i = 0; i < s.length(); ){
		if(s[i]>='a'&&s[i]<='z'){
			stemp += s[i++];
		}
		else if(s[i]>='0'&&s[i]<='9'){
			while(s[i]>='0'&&s[i]<='9'){
				k = k*10 + (s[i]-'0');
				i++;
			}
			for(int m = 0; m < k-1; m++){
				stemp += stemp[stemp.length()-1];
			}
			k = 0;
		}
	}
//	cout << stemp <<endl;
	s = "";
	s = s + stemp[0];
	j = 0, k = 1;
	for(int i = 1; i < stemp.length(); ){
		while(s[s.length()-1]==stemp[i]){
			k++;
			i++;
		}
		if(k>1){
			s += itos(k);
			k = 1;
		} 
		else{
			s += stemp[i++];
		}
	}
	cout << s << endl;
	return 0;
} 
