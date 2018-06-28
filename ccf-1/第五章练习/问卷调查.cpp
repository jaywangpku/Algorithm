#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, t, a[1005] = {0}, b[105] = {0};
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> t;
		a[t] = 1;
	}
	t = 0;
	for(int i = 1; i <= 1000; i++){
		if(a[i])
			b[t++] = i;
	}
	cout << t << endl;
	for(int i = 0; i < t; i++){
		cout << b[i] << " ";
	}
//	for(int i = 1; i <= 1000; i++){
//		if(a[i]){
//			cout << i << " ";
//		}
//	}
	return 0;
} 
