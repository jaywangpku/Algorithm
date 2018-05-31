#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;
	cin >> a;
	for(b = 1; c < a; b++){
		c = c + b;
	}
	b = b - 1;
	int ans = a - b*(b-1)/2;
	if(b % 2 == 0){
		cout << ans << "/" << b + 1 - ans << endl;
	}
	else{
		cout << b + 1 - ans << "/" << ans << endl;
	}
	
	return 0;
}
