#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	n = n*1000+n;
	n /= 7;
	n /= 11;
	n /= 13;
	cout << n << endl;
	return 0; 
} 
