#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long double ans = 0;
	for(int i = 0; i < 64; i++){
		ans += pow(2, i)/1.0/(1.42*pow(10, 8));
	}
	cout << ans << endl;
	return 0;
}
