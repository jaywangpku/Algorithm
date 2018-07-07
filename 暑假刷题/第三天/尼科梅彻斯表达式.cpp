#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a = n*n, b, c;
	if(n%2==0){
		b = a-1-2*(n/2-1);
		c = a+1+2*(n/2-1);
	}
	else{
		b = a-2*(n/2);
		c = a+2*(n/2);
	}
	cout << n << "*" << n << "*" << n << "=";
	for(int i = b; i < c; i+=2){
		cout << i << "+";
	}
	cout << c << endl;
	return 0;
} 
