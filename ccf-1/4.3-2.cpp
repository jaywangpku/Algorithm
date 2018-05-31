#include <iostream>
using namespace std;

int main()
{
	double ans = 1;
	int i = 3;
	while(1.0/i >= 1e-6){
		if((i+1) % 4 == 0){
			ans = ans - 1.0 / i;
		}
		else{
			ans = ans + 1.0 / i;
		}
		i = i + 2;
	}
	cout << 4 * ans << endl;
	return 0;
}
