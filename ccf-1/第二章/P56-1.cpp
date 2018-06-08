#include <iostream>
using namespace std;

int main()
{
	int n, m, a;
	int c = 0, r = 0;
	int ans = 0;
	cin >> n >> m >> a;
	c = n / a;
	r = m / a;
	ans = c*r;
	cout << ans << endl;
	return 0;
} 
