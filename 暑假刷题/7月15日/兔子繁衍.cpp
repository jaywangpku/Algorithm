#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long long a = 1, b = 0, temp;
	for(int i = 1; i < n; i++){
		temp = a;
		a = a + b;
		b = temp;
	}
	cout << a+b << endl;
	return 0;
} 
