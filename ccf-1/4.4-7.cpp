#include <iostream>
using namespace std;

int gcd(int a, int b){
	int temp = a%b;
	while(temp){
		a = b;
		b = temp;
		temp = a%b;
	}
	return b;
}

int main()
{
	int x, y, ans = 0;
	cin >> x >> y;
	for(int i = x; i <= y; i+=x)
	{
		for(int j = x; j <= y; j+=x)
		{
			if(gcd(i,j)==x && i*j/gcd(i,j) == y)
				ans++;
		}
	}
	cout << ans << endl;
	return 0;
} 
