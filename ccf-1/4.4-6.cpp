#include <iostream>
using namespace std;

int main()
{
	int n, ans = 0;
	cin >> n;
	ans = n;
	while(ans > 9){
		int temp = ans;
		ans = 0;
		while(temp){
			ans += temp%10;
			temp = temp / 10;
		}
	}
	cout << ans << endl;
	return 0;
} 
