#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[10][10] = {0};
	int i = n*n;
	a[n-1][n/2] = i;
	int c = n-1;
	int l = n/2;
	while(--i){
		int cc = (c+1)%n;
		int ll = (l+1)%n;
		if(a[cc][ll] == 0){
			a[cc][ll] = i;
			c = cc;
			l = ll;
		}
		else{
			cc = (c-1 + n)%n;
			a[cc][l] = i;
			c = cc;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
} 
