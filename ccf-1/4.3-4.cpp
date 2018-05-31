#include <iostream>
using namespace std;

int main()
{
	int a, b = 0;
	cin >> a;
	while(a){
		int t = a % 10;
		b = b * 10 + t;
		a = a / 10;
	}
	cout << b << endl;
	return 0;
}
