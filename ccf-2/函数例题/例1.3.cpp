#include <iostream>
using namespace std;

void output(int n)
{
	if(n <= 2)
		cout << n - 1 << endl;
	else{
		long long p1,p2,p3;
		p1 = 0;
		p2 = 1;
		for(int i=3; i <= n; i++){
			p3 = p1+p2;
			p1 = p2;
			p2 = p3;
		}
		cout << p3 << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	output(n);
	return 0;
}
