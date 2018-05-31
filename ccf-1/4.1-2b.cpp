#include <iostream>
using namespace std;

int main()
{
	int s = 0;
	int ans = 0;
	for(int i = 1; i <= 10; i++){
		s = s + i;
		ans = ans + s;
	}
	cout << ans << endl;
	return 0;
} 
