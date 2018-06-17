#include <iostream>
using namespace std;

int gcd1(int m, int n)
{
	return (n==0)?m:gcd1(n, m%n);
} 

int gcd2(int m, int n)
{
	if(m==n){
		return m;
	}
	if(m < n){
		return gcd2(n, m);
	}
	if(m & 1==0){
		return (n & 1==0)?2*gcd2(m/2, n/2):gcd2(m/2, n);
	}
	return (n & 1==0)?gcd2(m, n/2):gcd2(n, m-n);
} 

int main()
{
	int m, n;
	cin >> m >> n;
	cout << gcd2(m, n) << endl;
	return 0;
}
