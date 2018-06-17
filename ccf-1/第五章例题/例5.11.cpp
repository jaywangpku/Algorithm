#include <iostream>
#include <cstring>

using namespace std;
const int MAXN = 100001;
const int MAXK = 1001;

int main()
{
	int a[MAXN];
	int c[MAXK];
	int n;
	cin >> n;
	memset(a, 0, sizeof(a));
	memset(c, 0, sizeof(a));
	for(int i = 0; i < n; i++){
		cin >> a[i];
		c[a[i]]++;
	}
	for(int i = 0; i < MAXK; i++){
		while(c[i]--){
			cout << i << " ";
		}
	}
	return 0;
} 
