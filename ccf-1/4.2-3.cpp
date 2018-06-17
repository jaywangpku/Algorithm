#include <iostream>
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	int r = m%n;
	while(r){
		m = n;
		n = r;
		r = m%n;
	}
	if(n==1){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl; 
	}
	return 0;
} 
