#include <iostream>
#include <cstdlib>
using namespace std;

int m, n, r, s, a[100][100], b[100][100];
void input()
{
	cin >> m >> n;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	cin >> r >> s;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < s; j++){
			cin >> b[i][j];
		}
	}
}
int compute(int x, int y)
{
	int ans = 0;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < s; j++){
			ans += abs(a[x+i][y+j] - b[i][j]);
		}
	}
	return ans;
}
void work(int &x, int &y)
{
	int mindiff = 1000001;
	for(int i = 0; i <= m-r; i++){
		for(int j = 0; j <= n-s; j++){
			int curr=compute(i,j);
			if(curr<mindiff){
				mindiff = curr;
				x = i;
				y = j;
			}
		}
	}
}
void output(int x, int y)
{
	for(int i = 0; i < r; i++){
		for(int j = 0; j < s; j++){
			cout << a[x+i][y+j] << " ";
		} 
		cout << endl;
	}
}
int main()
{
	int x,y;
	input();
	work(x,y);
	output(x,y);
	return 0;
}
