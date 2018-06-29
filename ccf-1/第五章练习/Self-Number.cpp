#include <iostream>
using namespace std;
bool a[10000001];   // 定义成int就过不了，空间问题很重要 
int b[1000001];
int main()
{
	int n, m;
	int c[5005];
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		cin >> c[i];
	}
	for(int i = 0; i <= n; i++){
		a[i] = true;
	}
	for(int i = 1; i <= n; i++){
		int j = 0;
		int t = i;
		while(t){
			j+=t%10;
			t/=10;
		}
		j += i;
		if(j > n){
			continue;
		}
		a[j] = false;
	}
	int j = 0;
	for(int i = 1; i <= n; i++){
		if(a[i]){
			b[j++] = i;
		}
	}
	cout << j << endl;
	
	for(int i = 0; i < m; i++){
		cout << b[c[i] - 1] << " ";
	}
	return 0;
} 
