#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 100;

int main()
{
	int x, y, n, count = 1;
	int num[maxn][maxn];
	cin >> n;
	memset(num, 0, sizeof(num));
	x = 0;
	y = n-1;
	num[x][y] = 1;
	while(count < n*n){
		while(x+1<n&&!num[x+1][y]){
			x++;
			count++;
			num[x][y] = count;
		}
		while(y-1>=0&&!num[x][y-1]){
			y--;
			count++;
			num[x][y] = count;
		}
		while(x-1>=0&&!num[x-1][y]){
			x--;
			count++;
			num[x][y] = count;
		}
		while(y+1<n&&!num[x][y+1]){
			y++;
			count++;
			num[x][y] = count;
		}
	}
	for(x = 0; x < n; x++){
		for(y = 0; y < n; y++){
			cout << num[x][y] << " ";
		}
		cout << endl;
	}
	return 0;
}

