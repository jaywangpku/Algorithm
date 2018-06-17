#include <iostream>
using namespace std;

long long x,y;
long long gcd(long long x, long long y){
	long long r = x%y;
	while(r!=0){
		x = y;
		y = r;
		r = x%y;
	}
	return y;
}
long long lcm(){
	return x*y/gcd(x,y);
}
int main()
{
	cin >> x >> y;
	cout << lcm() << endl;
	return 0;
}
