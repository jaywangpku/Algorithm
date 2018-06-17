#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	int a = 0, b = 0, c = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		int aa, bb, cc;
		cin >> aa >> bb >> cc;
		a+=aa;
		b+=bb;
		c+=cc;
	}
	cout << a << " " << b << " " << c << " " << a+b+c << endl;
	return 0;
} 
