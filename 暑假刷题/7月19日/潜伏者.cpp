#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2,s3;
	char a[26] = {0};
	cin >> s1 >> s2 >> s3; 
	for(int i = 0; i < s1.length(); i++){
		if(a[s1[i]-'A'] == 0 || a[s1[i]-'A'] == s2[i]){
			a[s1[i]-'A'] = s2[i];
		}
		else{
			cout << "Failed";
			return 0;
		}
	}
	int b[26] = {0};
	for(int i = 0; i < 26; i++){
		b[a[i]-'A']++;
	}
	bool flag = true;
	for(int i = 0; i < 26; i++){    // 检查是否符合情况 
		if(b[i]>=2||b[i]==0){
			flag = false;
			break;
		}
	}
	if(flag == false){
		cout << "Failed";
		return 0;
	}
	for(int i = 0; i < s3.length(); i++){
		cout << a[s3[i]-'A'];
	}
	return 0;
} 
