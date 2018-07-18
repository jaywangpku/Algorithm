#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int c = a, d = b;
	int r = a%b;
	while(r){
		a = b;
		b = r;
		r = a%b;
	}
	cout << b << endl;
	cout << c*d/b << endl;
	return 0; 
} 
