#include <iostream>
using namespace std;

int main()
{
	int a, b, ans = 1;
	cin >> a >> b;
	for(int i = 1; i <= b; i++){
		ans = (ans*a)%10; 
	}
	cout << ans%10 << endl;
	return 0;
} 
