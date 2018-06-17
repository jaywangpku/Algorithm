#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a = 1;
	while(a){
		a = n/2;
		cout << a << "," << n%2 << endl;
		n = n/2; 
	}
	return 0;
} 
