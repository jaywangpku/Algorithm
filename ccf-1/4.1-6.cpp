#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, m;
	cin >> n;
	m = sqrt(n);
	int ans = 0;
	for(int i = 1; i <= m; i++){
		if(n%i==0){
			ans++;
		}
	}
	ans = ans*2;
	if(m*m==n){
		ans--;
	}
	cout << ans << endl;
	return 0;
}
