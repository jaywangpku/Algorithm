#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c, s, ans;
	cin >> a >> b >> c;
	s = (a+b+c)/2;
	ans = sqrt(s*(s-a)*(s-b)*(s-c));
	cout << ans << endl;
	return 0;
} 
