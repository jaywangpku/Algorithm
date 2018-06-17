#include <iostream>
using namespace std;

int main()
{
	int l,r;
	cin >> l >> r;
	int i = l;
	int ans = 0;
	while(i<=r){
		int j = i;
		while(j){
			if(j%10==2){
				ans++;
			}
			j /= 10;
		}
		i++;
	}
	cout << ans << endl;
	return 0;
} 
