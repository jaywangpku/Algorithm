#include <iostream>
using namespace std;

int main()
{
	int k;
	cin >> k;
	double n = 0, all = 0;
	while(all<=k){
		n++;
		all += 1/n;
	}
	cout << n << endl;
	return 0;
} 
