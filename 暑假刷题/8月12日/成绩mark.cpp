#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int score[1005][5] = {0};
	int mark[1005][6] = {0};
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 5; j++){
			cin >> score[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < 6; j++){
			cin >> mark[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		int ans = 0;
		for(int j = 0; j < 5; j++){
			ans += score[mark[i][5]-1][j] * mark[i][j];
		}
		cout << ans << " ";
	}
	return 0;
} 
