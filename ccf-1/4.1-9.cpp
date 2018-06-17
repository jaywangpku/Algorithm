#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
	int ans = 0, high;
	cin >> high;
	for(int i=0; i < 10; i++){
		int temp;
		cin >> temp;
		if(high+30>=temp){
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}  
