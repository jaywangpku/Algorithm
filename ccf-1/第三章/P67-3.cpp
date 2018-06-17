#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, m;
	cin >> n;
	m = n;
	int a, b, c;
	a = n%10;
	n = n/10;
	b = n%10;
	n = n/10;
	c = n%10;
	if(pow(a,3)+pow(b,3)+pow(c,3)==m){
		cout << 1 << endl;
	}
	else{
		cout << 0 << endl;
	}
	return 0;
} 
