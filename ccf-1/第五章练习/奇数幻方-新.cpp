#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[21][21];
	memset(a, 0, sizeof(a));
	int n;
	cin >> n;
	// 将数字1填在第一行的正中间
	a[1][n/2+1] = 1;
	// 依次去填其他的数
	int i = 1;
	int j = n/2+1;
	for(int k = 2; k <= n*n; k++){
		if((k-1)%n == 0){ // 减1能被n整除的情况 
			i = i + 1;
			a[i][j] = k;
		}
		else{
			i = i - 1;
			j = j + 1;
			if(i == 0){
				i = n;
			} 
			if(j == n+1){
				j = 1;
			}
			a[i][j] = k;
		}
	} 
	// 输出
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j] << " "; 
		}
		cout << endl;
	} 
	
	return 0;
}




