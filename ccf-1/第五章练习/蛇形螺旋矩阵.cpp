#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, count = 1;
	cin >> n;
	int a[21][21];
	memset(a, 0, sizeof(a));
	a[1][n] = 1;
	
	int i = 1;
	int j = n;
	while(count < n*n){
		while(i < n && !a[i+1][j]){ // 向下走 
			a[i][j] = count;
			i++;
			count++;
		}
		while(j > 1 && !a[i][j-1]){ // 向左走 
			a[i][j] = count;
			j--;
			count++;
		}
		while(i > 1 && !a[i-1][j]){ // 向上走 
			a[i][j] = count;
			i--;
			count++;
		}
		while(j < n && !a[i][j+1]){ // 向右走 
			a[i][j] = count;
			j++;
			count++;
		}
	}
	a[i][j] = n*n;
	// 输出
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j] << " ";
		} 
		cout << endl;
	} 
	return 0;
}




