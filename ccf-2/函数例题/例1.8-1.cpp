#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
const int  N=110;
int n, m, a[N][N], b[N][N];
string s;

void input()
{
	cin >> m >> n;
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}	
	cin >> s;
}
int f(char a, int x, int y, int g)
{
	if(a=='A'){
		if(!g){
			return y;
		}
		else{
			return m-x+1;
		}
	}
	if(a=='B'){
		if(!g){
			return n-y+1;
		}
		else{
			return x;
		}
	}
	if(a=='C'){
		if(!g){
			return x;
		}
		else{
			return n-y+1;
		}
	}
	if(a=='D'){
		if(!g){
			return m-x+1;
		}
		else{
			return y;
		}
	}
}
void work()
{
	for(int k = 0; k < s.length(); k++){
		for(int i = 1; i <= m; i++){
			for(int j = 1; j <= n; j++){
				b[f(s[k], i, j, 0)][f(s[k], i, j, 1)] = a[i][j];
			}
		}
		if(s[k] == 'A'||s[k] == 'B'){
			swap(m, n);
		}
		for(int i = 1; i <= m; i++){
			for(int j = 1; j <= n; j++){
				a[i][j] = b[i][j];
			}
		}
	}
}
void output()
{
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
} 
int main()
{
	input();
	work();
	output();
	return 0;
}
 
 
 
 
 
 
 
