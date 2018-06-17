#include <iostream>
using namespace std;

int main()
{
	int a[10001];
	int i, n, maxa, k;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	maxa = a[1];
	k = 1;
	for(int i = 2; i <= n; i++){
		if(maxa < a[i]){
			maxa = a[i];
			k = i;
		}
	}
	cout << k;
	return 0;
} 
