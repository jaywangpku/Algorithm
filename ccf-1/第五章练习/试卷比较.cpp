#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	for(int i = 0; i < min(s1.length(), s2.length()); i++){
		if(s1[i]==s2[i]){
			cout << i+1 << " ";
		}
	}
	return 0;
}
