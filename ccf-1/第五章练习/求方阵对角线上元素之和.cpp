#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[4][4];
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			cin >> a[i][j];
		}
	}
	int ans1 = 0, ans2 = 0;
	for(int i = 0; i < 4; i++){
		ans1 += a[i][i];
		ans2 += a[i][3-i]; 
	}
	cout << ans1 << " " << ans2 << endl;
	return 0;
}




