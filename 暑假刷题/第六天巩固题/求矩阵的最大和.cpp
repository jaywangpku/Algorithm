#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int a[105][105] = {0};
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	int maxn[105] = {0};    //每一行的最大值 
	int maxm[105] = {0};    //每一列的最大值 
	for(int i = 0; i < n; i++){
		maxn[i] = a[i][0];
		for(int j = 1; j < m; j++){
			if(maxn[i] < a[i][j]){
				maxn[i] = a[i][j];
			}
		}
	}
	for(int j = 0; j < m; j++){
		maxm[j] = a[0][j];
		for(int i = 0; i < n; i++){
			if(maxm[j] < a[i][j]){
				maxm[j] = a[i][j];
			}
		}
	} 
	int mn = 0, mm = 0; 
	for(int i = 0; i < n; i++){
		mn += maxn[i];
	}
	for(int i = 0; i < m; i++){
		mm += maxm[i];
	}
	cout << mn << endl << mm << endl;
	return 0;
}
