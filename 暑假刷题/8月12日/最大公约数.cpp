#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	int r = a%b;
	if(r){
		return gcd(b, r);
	}
	else{
		return b;
	}
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
	return 0;
} 
