#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	double ans = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		ans += temp;
	}
	ans = ans/n;
	printf("%.2f\n", ans);
	return 0;
} 
