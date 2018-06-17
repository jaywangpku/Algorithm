#include <iostream>
using namespace std;

int main()
{
	int a = 182;
	for(int i = 0; i < 25; i++){
		int t;
		cin >> t;
		a = a - t;
	} 
	cout << a << endl;
	return 0;
} 
