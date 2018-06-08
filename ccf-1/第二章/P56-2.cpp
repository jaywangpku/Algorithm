#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double r, x, p;
	double ans = 0;
	cin >> r >> x >> p;
	ans = x*pow(((100+r)/100), p);
	cout << ans << endl;
	return 0; 
} 
