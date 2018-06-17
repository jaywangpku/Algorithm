#include <iostream>
#include <cmath>
using namespace std;

int PowerMod(int a, int b, int c)
{
	int ans = 1;
	a = a%c;
	while(b>0){
		if(b%2==1){
			ans = (ans*a)%c;
		}
		b = b/2;
		a = (a*a)%c;
	}
	return ans;
}

int main()
{
	int n, m, k, x;
	cin >> n >> m >> k >> x;
	int all = PowerMod(10,k,n);
	all = (all*m+x)%n;
	cout << all << endl;
	return 0;
} 
