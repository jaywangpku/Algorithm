#include <iostream>

using namespace std;

int main()
{
	int a, ans = 0;
	cin >> a;
	while(a > 0)
	{
		ans = ans + 1;
		a =  a / 10;
	}
	cout << ans << endl;
} 
