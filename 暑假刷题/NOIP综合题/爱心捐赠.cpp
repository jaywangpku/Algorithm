#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int k, a = n, b = m;
	k = a%b;
	while(k){
		a = b;
		b = k;
		k = a%b;
	}
	k = b;
	cout <<"XueXiao=" << n*m/(k*k) << endl;
	return 0;
} 
