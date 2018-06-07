#include <iostream>
using namespace std;

int main()
{
	int n, ans = 0;
	cin >> n;
	for(int i = 0; i <= n/50; i++)
	{
		ans += (n-i*50)/20 + 1; 
	}
	cout << ans << endl;
	return 0;
} 
