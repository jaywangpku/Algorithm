#include <iostream>
#include <cstring>
using namespace std;
const int MAXN = 105;

int main()
{
	int i, j, n, c[MAXN][MAXN];
	cin >> n;
	memset(c, 0 ,sizeof(c));
	c[0][0] = 1;
	c[1][0] = 1;
	c[1][1] = 1;
	for(i = 2; i < n; i++){
		c[i][0] = 1;
		for(j = 1; j <= i; j++){
			c[i][j] = c[i-1][j] + c[i-1][j-1];
		}
	}
	for(i = 0; i < n; i++){
		for(j = 0; j <= i; j++){
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
} 
