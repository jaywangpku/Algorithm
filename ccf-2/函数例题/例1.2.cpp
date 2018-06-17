#include <iostream>
using namespace std;

long long f(int n)
{
	long long ans = 1;
	for(int i = 1; i <= n; i++){
		ans *= i;
	}
	return ans;
}
long long C(int n, int m)
{
	return f(n)/(f(m)*f(n-m));
}

int main()
{
	int n, m;
	cin >> n >> m;
	cout << C(n, m) << endl;
	return 0;
}
