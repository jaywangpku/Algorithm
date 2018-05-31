#include <iostream>
using namespace std;

int main()
{
	long long a;
	int ans = 1;
	cin >> a;
	while(a!=1){
		if(a % 2 == 0){
			a = a / 2;
		}
		else{
			a = a * 3 + 1;
		}
		ans++;
	}
	cout << ans << endl;
	return 0;
}
