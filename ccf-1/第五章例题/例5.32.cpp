#include <iostream>
#include <cstring>
using namespace std;
const int MAXN = 300010;
int main()
{
	int m, s, t, i;
	int f[MAXN];
	cin >> m >> s >> t;
	f[0] = 0;
	for(i = 1; i <= t; i++){
		if(m > 9){
			f[i] = f[i-1] + 60;
			m = m - 10;
		}
		else{
			f[i] = f[i-1];
			m = m + 4;
		}
	}
	for(i = 1; i <= t; i++){
		if(f[i] < f[i-1] + 17){
			f[i] = f[i-1] + 17;
		}
		if(f[i]>=s){
			cout << "Yes" << endl << i;
			return 0;
		}
	}
	cout << "No" << endl << f[t];
	return 0;
} 
