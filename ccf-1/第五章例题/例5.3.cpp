#include <iostream>
using namespace std;

int main()
{
	int a[10];
	for(int i = 0; i < 10; i++){
		cin >> a[i];
	}
	int high, ans = 0;
	cin >> high;
	high += 30;
	for(int i = 0; i < 10; i++){
		if(high >= a[i])
			ans++;
	}
	cout << ans << endl;
	return 0;
} 
