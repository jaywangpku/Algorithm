#include <iostream>
using namespace std;

int main()
{
	double ans = 200;
	double i = 100;
	while(i >= 0.5){
		ans += i * 2;
		i = i / 2;
	}
	cout << ans << endl;
	return 0;
}
