#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, ans = 0;
	cin >> n;
	int c[6] = {0};
	
	if(n>2401){
		c[4] = n/2401;
		n = n%2401;
	}
	if(n>343){
		c[3] = n/343;
		n = n%343;
	}
	if(n>49){
		c[2] = n/49;
		n = n%49;
	}
	if(n>7){
		c[1] = n/7;
		n = n%7;
	}
	c[0] = n;
	
	for(int i = 0; i < 4; i++){
		if(c[i]>=4){
			c[i] = 7-c[i];
			c[i+1]++;
		}
	}
	for(int i = 0; i <=4; i++){
		ans+=c[i];
	}
	cout << ans << endl;
	return 0;
} 
