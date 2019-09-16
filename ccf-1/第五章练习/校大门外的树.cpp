#include <bits/stdc++.h>
using namespace std;
int high[10001] = {0};

int main()
{	
	int l, m;
	cin >> l >> m;
	for(int i = 0; i <= l; i++){
		cin >> high[i]; 
	}
	int mina = 1000000;
	int maxa = -1000000; 
	int c, d;
	for(int i = 0; i < m; i++){
		cin >> c >> d;
		if(maxa < d){
			maxa = d;
		}
		if(mina > c){
			mina = c;
		}
	}
	for(int i = mina; i <= maxa && i - mina < 100; i++){
		cout << high[i] << " ";
	}
	return 0;
}


